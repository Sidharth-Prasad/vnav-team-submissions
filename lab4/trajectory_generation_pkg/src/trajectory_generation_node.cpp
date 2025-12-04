#include <geometry_msgs/msg/pose_array.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/subscription.hpp>
#include <std_msgs/msg/string.hpp>
#include <trajectory_msgs/msg/multi_dof_joint_trajectory.hpp>

#include <mav_trajectory_generation/polynomial_optimization_linear.h>
#include <mav_trajectory_generation/trajectory.h>

#include <eigen3/Eigen/Dense>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

class WaypointFollower : public rclcpp::Node {

  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr currentStateSub;
  rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr poseArraySub;

  rclcpp::Publisher<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>::
      SharedPtr desiredStatePub;

  // Current state
  Eigen::Vector3d x; // current position of the UAV's c.o.m. in the world frame

  rclcpp::TimerBase::SharedPtr desiredStateTimer;

  rclcpp::Time trajectoryStartTime;
  mav_trajectory_generation::Trajectory trajectory;
  mav_trajectory_generation::Trajectory yaw_trajectory;

  void onCurrentState(nav_msgs::msg::Odometry const &cur_state) {
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //  PART 1.1 |  16.485 - Fall 2024  - Lab 4 coding assignment (5 pts)
    // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    // ~
    //
    //  Populate the variable x, which encodes the current world position of the
    //  UAV
    // ~~~~ begin solution
    
    // grab the pose variable from teh currentStateSub
    const auto &position = cur_state.pose.pose.position;
    x << position.x, position.y, position.z;

    // ~~~~ end solution
    // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    // ~
    //                                 end part 1.1
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  }

  void
  generateOptimizedTrajectory(geometry_msgs::msg::PoseArray const &poseArray) {
    if (poseArray.poses.size() < 1) {
      RCLCPP_ERROR(get_logger(),
                   "Must have at least one pose to generate trajectory!");
      trajectory.clear();
      yaw_trajectory.clear();
      return;
    }

    if (!trajectory.empty())
      return;

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //  PART 1.2 |  16.485 - Fall 2024  - Lab 4 coding assignment (35 pts)
    // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    // ~
    //
    //  We are using the mav_trajectory_generation library
    //  (https://github.com/ethz-asl/mav_trajectory_generation) to perform
    //  trajectory optimization given the waypoints (based on the position and
    //  orientation of the gates on the race course).
    //  We will be finding the trajectory for the position and the trajectory
    //  for the yaw in a decoupled manner.
    //  In this section:
    //  1. Fill in the correct number for D, the dimension we should apply to
    //  the solver to find the positional trajectory
    //  2. Correctly populate the Vertex::Vector structure below (vertices,
    //  yaw_vertices) using the position of the waypoints and the yaw of the
    //  waypoints respectively
    //
    //  Hints:
    //  1. Use vertex.addConstraint(POSITION, position) where position is of
    //  type Eigen::Vector3d to enforce a waypoint position.
    //  2. Use vertex.addConstraint(ORIENTATION, yaw) where yaw is a double
    //  to enforce a waypoint yaw.
    //  3. Remember angle wraps around 2 pi. Be careful!
    //  4. For the ending waypoint for position use .makeStartOrEnd as seen with
    //  the starting waypoint instead of .addConstraint as you would do for the
    //  other waypoints.
    //
    // ~~~~ begin solution

    // for access to SNAP
    using namespace mav_trajectory_generation::derivative_order;
    
    const int D = 3; // dimension of each vertex in the trajectory
    mav_trajectory_generation::Vertex::Vector vertices;
    mav_trajectory_generation::Vertex::Vector yaw_vertices;

    const int derivative_to_optimize = SNAP;
    //mav_trajectory_generation::Vertex start(dimension), middle(dimension), end(dimension);

    int nPose = poseArray.poses.size();
    // put a for loop here for each potential vertices in there?
    // other points
    for(int i = 0; i < nPose; i++){
      mav_trajectory_generation::Vertex pVert(D), yVert(1);
      tf2::Quaternion quat_tf;
      const auto iPos= poseArray.poses[i].position;
      Eigen::Vector3d posVec(iPos.x, iPos.y, iPos.z);
      tf2::fromMsg(poseArray.poses[i].orientation, quat_tf);
      double roll, pitch, yaw;
      tf2::Matrix3x3(quat_tf).getRPY(roll, pitch, yaw);      
      const auto position = poseArray.poses[i].position;
      //code to accoutn for wrap around
      
      double iYaw = yaw;
      double prev_yaw;
      if(i > 0){
        double diff = iYaw - prev_yaw;
        if (diff > M_PI) iYaw -= 2*M_PI;
        else if (diff < -M_PI) iYaw += 2*M_PI;
      }

      prev_yaw = iYaw;

      
      if(i == 0 || i == nPose - 1){
        pVert.makeStartOrEnd(posVec, derivative_to_optimize);
        yVert.makeStartOrEnd(iYaw, derivative_to_optimize);
      }
      else{
        pVert.addConstraint(POSITION, posVec);
        yVert.addConstraint(POSITION, iYaw);
      }
        vertices.push_back(pVert);
        yaw_vertices.push_back(yVert);
    }
    // Last points
    

    // ~~~~ end solution
    // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    // ~
    //                                 end part 1.2
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // ============================================================
    // Estimate the time to complete each segment of the trajectory
    // ============================================================

    std::vector<double> segment_times;
    const double v_max = 8.0;
    const double a_max = 4.0;
    segment_times = estimateSegmentTimes(vertices, v_max, a_max);

    // =====================================================
    // Solve for the optimized trajectory (linear optimizer)
    // =====================================================
    // Position
    const int N = 10;
    mav_trajectory_generation::PolynomialOptimization<N> opt(D);
    opt.setupFromVertices(vertices, segment_times, SNAP);
    opt.solveLinear();

    // Yaw
    mav_trajectory_generation::PolynomialOptimization<N> yaw_opt(1);
    yaw_opt.setupFromVertices(yaw_vertices, segment_times, SNAP);
    yaw_opt.solveLinear();

    // ============================
    // Get the optimized trajectory
    // ============================
    mav_trajectory_generation::Segment::Vector segments;
    //        opt.getSegments(&segments); // Unnecessary?
    opt.getTrajectory(&trajectory);
    yaw_opt.getTrajectory(&yaw_trajectory);
    trajectoryStartTime = now();

    RCLCPP_INFO(get_logger(),
                "Generated optimizes trajectory from %zu waypoints",
                vertices.size());
  }

  void publishDesiredState() {
    if (trajectory.empty())
      return;

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //  PART 1.3 |  16.485 - Fall 2024  - Lab 4 coding assignment (15 pts)
    // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    // ~
    //
    //  Finally we get to send commands to our controller! First fill in
    //  properly the value for 'next_point.time_from_start' and 'sampling_time'
    //  (hint: not 0) and after extracting the state information from our
    //  optimized trajectory, finish populating next_point.
    //
    // ~~~~ begin solution
    //next_point.time_from_start is a field in the MultiDOFJointTrajectoryPoint msg
    
    //sampling_time is for the sampling trajectories part of the tutorial?
    using namespace mav_trajectory_generation::derivative_order;
    rclcpp::Duration t_traj = now() - trajectoryStartTime;
    double t = t_traj.seconds();
    
    Eigen::VectorXd samplePos = trajectory.evaluate(t, POSITION);
    Eigen::VectorXd sampleVel = trajectory.evaluate(t, VELOCITY);
    Eigen::VectorXd sampleAcc = trajectory.evaluate(t, ACCELERATION);

    Eigen::VectorXd sampleYaw = yaw_trajectory.evaluate(t, POSITION);
    Eigen::VectorXd sampleYawRate = yaw_trajectory.evaluate(t, VELOCITY);

    //trajectories are stored in trajectory and yaw_trajectory variables
    
    tf2::Quaternion q;
    q.setRPY(0, 0, sampleYaw(0));


    trajectory_msgs::msg::MultiDOFJointTrajectoryPoint next_point;
    next_point.time_from_start = t_traj;
    geometry_msgs::msg::Transform transform;
    transform.translation.x = samplePos[0];
    transform.translation.y = samplePos[1];
    transform.translation.z = samplePos[2];

    transform.rotation.x = q.x();
    transform.rotation.y = q.y();
    transform.rotation.z = q.z();
    transform.rotation.w = q.w();

    geometry_msgs::msg::Twist velocity, acceleration;
    velocity.linear.x = sampleVel[0];
    velocity.linear.y = sampleVel[1];
    velocity.linear.z = sampleVel[2];

    velocity.angular.x  = velocity.angular.y = 0;
    velocity.angular.z  = sampleYawRate[0];

    acceleration.linear.x = sampleAcc[0];
    acceleration.linear.y = sampleAcc[1];
    acceleration.linear.z = sampleAcc[2];

    acceleration.angular.x = acceleration.angular.y = acceleration.angular.z = 0;

    next_point.transforms.push_back(transform);
    next_point.velocities.push_back(velocity);
    next_point.accelerations.push_back(acceleration);

    
    desiredStatePub->publish(next_point);

    // ~~~~ end solution
    // ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    // ~
    //                                 end part 1.3
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  }

public:
  explicit WaypointFollower() : Node("waypoint_follower_node") {
    currentStateSub = this->create_subscription<nav_msgs::msg::Odometry>(
        "/current_state", 1,
        std::bind(&WaypointFollower::onCurrentState, this,
                  std::placeholders::_1));

    poseArraySub = this->create_subscription<geometry_msgs::msg::PoseArray>(
        "/desired_traj_vertices", 1,
        std::bind(&WaypointFollower::generateOptimizedTrajectory, this,
                  std::placeholders::_1));

    desiredStatePub = this->create_publisher<
        trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>("/desired_state",
                                                            1);

    desiredStateTimer =
        create_timer(this, get_clock(), rclcpp::Duration::from_seconds(0.2),
                     std::bind(&WaypointFollower::publishDesiredState, this));
    desiredStateTimer->reset();
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<WaypointFollower>());
  return 0;
}
