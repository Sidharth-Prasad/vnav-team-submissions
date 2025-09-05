// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesse_msgs:srv/ObjectSpawnRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__BUILDER_HPP_
#define TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesse_msgs/srv/detail/object_spawn_request_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesse_msgs
{

namespace srv
{

namespace builder
{

class Init_ObjectSpawnRequestService_Request_params
{
public:
  explicit Init_ObjectSpawnRequestService_Request_params(::tesse_msgs::srv::ObjectSpawnRequestService_Request & msg)
  : msg_(msg)
  {}
  ::tesse_msgs::srv::ObjectSpawnRequestService_Request params(::tesse_msgs::srv::ObjectSpawnRequestService_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::srv::ObjectSpawnRequestService_Request msg_;
};

class Init_ObjectSpawnRequestService_Request_pose
{
public:
  explicit Init_ObjectSpawnRequestService_Request_pose(::tesse_msgs::srv::ObjectSpawnRequestService_Request & msg)
  : msg_(msg)
  {}
  Init_ObjectSpawnRequestService_Request_params pose(::tesse_msgs::srv::ObjectSpawnRequestService_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ObjectSpawnRequestService_Request_params(msg_);
  }

private:
  ::tesse_msgs::srv::ObjectSpawnRequestService_Request msg_;
};

class Init_ObjectSpawnRequestService_Request_id
{
public:
  Init_ObjectSpawnRequestService_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectSpawnRequestService_Request_pose id(::tesse_msgs::srv::ObjectSpawnRequestService_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectSpawnRequestService_Request_pose(msg_);
  }

private:
  ::tesse_msgs::srv::ObjectSpawnRequestService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::srv::ObjectSpawnRequestService_Request>()
{
  return tesse_msgs::srv::builder::Init_ObjectSpawnRequestService_Request_id();
}

}  // namespace tesse_msgs


namespace tesse_msgs
{

namespace srv
{

namespace builder
{

class Init_ObjectSpawnRequestService_Response_success
{
public:
  Init_ObjectSpawnRequestService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesse_msgs::srv::ObjectSpawnRequestService_Response success(::tesse_msgs::srv::ObjectSpawnRequestService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::srv::ObjectSpawnRequestService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::srv::ObjectSpawnRequestService_Response>()
{
  return tesse_msgs::srv::builder::Init_ObjectSpawnRequestService_Response_success();
}

}  // namespace tesse_msgs

#endif  // TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__BUILDER_HPP_
