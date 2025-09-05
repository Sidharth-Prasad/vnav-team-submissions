// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__TRAITS_HPP_
#define TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesse_msgs/msg/detail/collision_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesse_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_collision
  {
    out << "is_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.is_collision, out);
    out << ", ";
  }

  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.is_collision, out);
    out << "\n";
  }

  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionStats & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tesse_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesse_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesse_msgs::msg::CollisionStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesse_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesse_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesse_msgs::msg::CollisionStats & msg)
{
  return tesse_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesse_msgs::msg::CollisionStats>()
{
  return "tesse_msgs::msg::CollisionStats";
}

template<>
inline const char * name<tesse_msgs::msg::CollisionStats>()
{
  return "tesse_msgs/msg/CollisionStats";
}

template<>
struct has_fixed_size<tesse_msgs::msg::CollisionStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesse_msgs::msg::CollisionStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesse_msgs::msg::CollisionStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__TRAITS_HPP_
