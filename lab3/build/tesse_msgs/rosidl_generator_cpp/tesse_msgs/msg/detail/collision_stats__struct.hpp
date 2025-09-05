// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__STRUCT_HPP_
#define TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesse_msgs__msg__CollisionStats __attribute__((deprecated))
#else
# define DEPRECATED__tesse_msgs__msg__CollisionStats __declspec(deprecated)
#endif

namespace tesse_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionStats_
{
  using Type = CollisionStats_<ContainerAllocator>;

  explicit CollisionStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_collision = false;
      this->object_name = "";
    }
  }

  explicit CollisionStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_collision = false;
      this->object_name = "";
    }
  }

  // field types and members
  using _is_collision_type =
    bool;
  _is_collision_type is_collision;
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_name_type object_name;

  // setters for named parameter idiom
  Type & set__is_collision(
    const bool & _arg)
  {
    this->is_collision = _arg;
    return *this;
  }
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesse_msgs::msg::CollisionStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesse_msgs::msg::CollisionStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesse_msgs::msg::CollisionStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesse_msgs::msg::CollisionStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesse_msgs__msg__CollisionStats
    std::shared_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesse_msgs__msg__CollisionStats
    std::shared_ptr<tesse_msgs::msg::CollisionStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionStats_ & other) const
  {
    if (this->is_collision != other.is_collision) {
      return false;
    }
    if (this->object_name != other.object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionStats_

// alias to use template instance with default allocator
using CollisionStats =
  tesse_msgs::msg::CollisionStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesse_msgs

#endif  // TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__STRUCT_HPP_
