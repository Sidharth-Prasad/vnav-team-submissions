// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesse_msgs:srv/RepositionRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__REPOSITION_REQUEST_SERVICE__BUILDER_HPP_
#define TESSE_MSGS__SRV__DETAIL__REPOSITION_REQUEST_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesse_msgs/srv/detail/reposition_request_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesse_msgs
{

namespace srv
{

namespace builder
{

class Init_RepositionRequestService_Request_pose
{
public:
  Init_RepositionRequestService_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesse_msgs::srv::RepositionRequestService_Request pose(::tesse_msgs::srv::RepositionRequestService_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::srv::RepositionRequestService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::srv::RepositionRequestService_Request>()
{
  return tesse_msgs::srv::builder::Init_RepositionRequestService_Request_pose();
}

}  // namespace tesse_msgs


namespace tesse_msgs
{

namespace srv
{

namespace builder
{

class Init_RepositionRequestService_Response_success
{
public:
  Init_RepositionRequestService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesse_msgs::srv::RepositionRequestService_Response success(::tesse_msgs::srv::RepositionRequestService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesse_msgs::srv::RepositionRequestService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesse_msgs::srv::RepositionRequestService_Response>()
{
  return tesse_msgs::srv::builder::Init_RepositionRequestService_Response_success();
}

}  // namespace tesse_msgs

#endif  // TESSE_MSGS__SRV__DETAIL__REPOSITION_REQUEST_SERVICE__BUILDER_HPP_
