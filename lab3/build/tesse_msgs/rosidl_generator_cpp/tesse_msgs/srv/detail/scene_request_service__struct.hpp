// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesse_msgs:srv/SceneRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__STRUCT_HPP_
#define TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesse_msgs__srv__SceneRequestService_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesse_msgs__srv__SceneRequestService_Request __declspec(deprecated)
#endif

namespace tesse_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SceneRequestService_Request_
{
  using Type = SceneRequestService_Request_<ContainerAllocator>;

  explicit SceneRequestService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  explicit SceneRequestService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesse_msgs__srv__SceneRequestService_Request
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesse_msgs__srv__SceneRequestService_Request
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SceneRequestService_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SceneRequestService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SceneRequestService_Request_

// alias to use template instance with default allocator
using SceneRequestService_Request =
  tesse_msgs::srv::SceneRequestService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesse_msgs


#ifndef _WIN32
# define DEPRECATED__tesse_msgs__srv__SceneRequestService_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesse_msgs__srv__SceneRequestService_Response __declspec(deprecated)
#endif

namespace tesse_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SceneRequestService_Response_
{
  using Type = SceneRequestService_Response_<ContainerAllocator>;

  explicit SceneRequestService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SceneRequestService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesse_msgs__srv__SceneRequestService_Response
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesse_msgs__srv__SceneRequestService_Response
    std::shared_ptr<tesse_msgs::srv::SceneRequestService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SceneRequestService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SceneRequestService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SceneRequestService_Response_

// alias to use template instance with default allocator
using SceneRequestService_Response =
  tesse_msgs::srv::SceneRequestService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesse_msgs

namespace tesse_msgs
{

namespace srv
{

struct SceneRequestService
{
  using Request = tesse_msgs::srv::SceneRequestService_Request;
  using Response = tesse_msgs::srv::SceneRequestService_Response;
};

}  // namespace srv

}  // namespace tesse_msgs

#endif  // TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__STRUCT_HPP_
