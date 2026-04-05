// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/LoadWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/load_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadWaypoint_Request_file
{
public:
  Init_LoadWaypoint_Request_file()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::LoadWaypoint_Request file(::mvp_msgs::srv::LoadWaypoint_Request::_file_type arg)
  {
    msg_.file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::LoadWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::LoadWaypoint_Request>()
{
  return mvp_msgs::srv::builder::Init_LoadWaypoint_Request_file();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadWaypoint_Response_success
{
public:
  Init_LoadWaypoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::LoadWaypoint_Response success(::mvp_msgs::srv::LoadWaypoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::LoadWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::LoadWaypoint_Response>()
{
  return mvp_msgs::srv::builder::Init_LoadWaypoint_Response_success();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__BUILDER_HPP_
