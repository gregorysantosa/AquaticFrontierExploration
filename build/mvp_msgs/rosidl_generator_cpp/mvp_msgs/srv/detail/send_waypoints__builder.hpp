// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/SendWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/send_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_SendWaypoints_Request_wpt
{
public:
  explicit Init_SendWaypoints_Request_wpt(::mvp_msgs::srv::SendWaypoints_Request & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::srv::SendWaypoints_Request wpt(::mvp_msgs::srv::SendWaypoints_Request::_wpt_type arg)
  {
    msg_.wpt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::SendWaypoints_Request msg_;
};

class Init_SendWaypoints_Request_type
{
public:
  Init_SendWaypoints_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendWaypoints_Request_wpt type(::mvp_msgs::srv::SendWaypoints_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SendWaypoints_Request_wpt(msg_);
  }

private:
  ::mvp_msgs::srv::SendWaypoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::SendWaypoints_Request>()
{
  return mvp_msgs::srv::builder::Init_SendWaypoints_Request_type();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_SendWaypoints_Response_success
{
public:
  Init_SendWaypoints_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::SendWaypoints_Response success(::mvp_msgs::srv::SendWaypoints_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::SendWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::SendWaypoints_Response>()
{
  return mvp_msgs::srv::builder::Init_SendWaypoints_Response_success();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__BUILDER_HPP_
