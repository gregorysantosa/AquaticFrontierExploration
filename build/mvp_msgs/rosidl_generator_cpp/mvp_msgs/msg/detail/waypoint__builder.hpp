// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_u
{
public:
  explicit Init_Waypoint_u(::mvp_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::Waypoint u(::mvp_msgs::msg::Waypoint::_u_type arg)
  {
    msg_.u = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_ll_wpt
{
public:
  explicit Init_Waypoint_ll_wpt(::mvp_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_u ll_wpt(::mvp_msgs::msg::Waypoint::_ll_wpt_type arg)
  {
    msg_.ll_wpt = std::move(arg);
    return Init_Waypoint_u(msg_);
  }

private:
  ::mvp_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_wpt
{
public:
  explicit Init_Waypoint_wpt(::mvp_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_ll_wpt wpt(::mvp_msgs::msg::Waypoint::_wpt_type arg)
  {
    msg_.wpt = std::move(arg);
    return Init_Waypoint_ll_wpt(msg_);
  }

private:
  ::mvp_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_header
{
public:
  Init_Waypoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_wpt header(::mvp_msgs::msg::Waypoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Waypoint_wpt(msg_);
  }

private:
  ::mvp_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::Waypoint>()
{
  return mvp_msgs::msg::builder::Init_Waypoint_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
