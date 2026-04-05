// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWaypoints_Request_count
{
public:
  Init_GetWaypoints_Request_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::GetWaypoints_Request count(::mvp_msgs::srv::GetWaypoints_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::GetWaypoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetWaypoints_Request>()
{
  return mvp_msgs::srv::builder::Init_GetWaypoints_Request_count();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWaypoints_Response_wpt
{
public:
  Init_GetWaypoints_Response_wpt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::GetWaypoints_Response wpt(::mvp_msgs::srv::GetWaypoints_Response::_wpt_type arg)
  {
    msg_.wpt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::GetWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetWaypoints_Response>()
{
  return mvp_msgs::srv::builder::Init_GetWaypoints_Response_wpt();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_
