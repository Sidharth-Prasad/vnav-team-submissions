// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesse_msgs:srv/SceneRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__BUILDER_HPP_
#define TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesse_msgs/srv/detail/scene_request_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesse_msgs
{

namespace srv
{

namespace builder
{

class Init_SceneRequestService_Request_id
{
public:
  Init_SceneRequestService_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesse_msgs::srv::SceneRequestService_Request id(::tesse_msgs::srv::SceneRequestService_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::srv::SceneRequestService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::srv::SceneRequestService_Request>()
{
  return tesse_msgs::srv::builder::Init_SceneRequestService_Request_id();
}

}  // namespace tesse_msgs


namespace tesse_msgs
{

namespace srv
{

namespace builder
{

class Init_SceneRequestService_Response_success
{
public:
  Init_SceneRequestService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesse_msgs::srv::SceneRequestService_Response success(::tesse_msgs::srv::SceneRequestService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::srv::SceneRequestService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::srv::SceneRequestService_Response>()
{
  return tesse_msgs::srv::builder::Init_SceneRequestService_Response_success();
}

}  // namespace tesse_msgs

#endif  // TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__BUILDER_HPP_
