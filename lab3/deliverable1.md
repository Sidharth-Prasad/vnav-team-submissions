## Transforms in Practicce

1.    Assume we have an incoming geometry_msgs::msg::Quaternion quat_msg that holds the pose of our robot. We need to save it in an already defined tf2::Quaternion quat_tf for further calculations. Write one line of C++ code to accomplish this task.

tf2::convert(quat_msg, quat_tf)

2. Assume we have just estimated our robot’s newest rotation and it’s saved in a variable called quat_tf of type tf2::Quaternion. Write one line of C++ code to convert it to a geometry_msgs::msg::Quaternion type. Use quat_msg as the name of the new variable.

quat_msg = tf2::toMsg(quat_tf)

3. If you just want to know the scalar value of a tf2::Quaternion, what member function will you use?

tfScalar length()

4. Assume you have a tf2::Quaternion quat_t. How to extract the yaw component of the rotation with just one function call?

5. Assume you have a geometry_msgs::msg::Quaternion quat_msg. How to you convert it to an Eigen 3-by-3 matrix? Refer to this and this for possible functions. You probably need two function calls for this.