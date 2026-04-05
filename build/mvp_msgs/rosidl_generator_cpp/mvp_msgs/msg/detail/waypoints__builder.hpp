// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoints_wpt
{
public:
  explicit Init_Waypoints_wpt(::mvp_msgs::msg::Waypoints & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::Waypoints wpt(::mvp_msgs::msg::Waypoints::_wpt_type arg)
  {
    msg_.wpt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::Waypoints msg_;
};

class Init_Waypoints_type
{
public:
  Init_Waypoints_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoints_wpt type(::mvp_msgs::msg::Waypoints::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Waypoints_wpt(msg_);
  }

private:
  ::mvp_msgs::msg::Waypoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::Waypoints>()
{
  return mvp_msgs::msg::builder::Init_Waypoints_type();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_
