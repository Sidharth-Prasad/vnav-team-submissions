// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__BUILDER_HPP_
#define TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesse_msgs/msg/detail/collision_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesse_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionStats_object_name
{
public:
  explicit Init_CollisionStats_object_name(::tesse_msgs::msg::CollisionStats & msg)
  : msg_(msg)
  {}
  ::tesse_msgs::msg::CollisionStats object_name(::tesse_msgs::msg::CollisionStats::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::msg::CollisionStats msg_;
};

class Init_CollisionStats_is_collision
{
public:
  Init_CollisionStats_is_collision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionStats_object_name is_collision(::tesse_msgs::msg::CollisionStats::_is_collision_type arg)
  {
    msg_.is_collision = std::move(arg);
    return Init_CollisionStats_object_name(msg_);
  }

private:
  ::tesse_msgs::msg::CollisionStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::msg::CollisionStats>()
{
  return tesse_msgs::msg::builder::Init_CollisionStats_is_collision();
}

}  // namespace tesse_msgs

#endif  // TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__BUILDER_HPP_
