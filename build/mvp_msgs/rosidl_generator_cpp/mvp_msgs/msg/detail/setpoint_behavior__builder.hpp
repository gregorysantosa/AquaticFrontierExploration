// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/SetpointBehavior.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/setpoint_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_SetpointBehavior_behavior
{
public:
  explicit Init_SetpointBehavior_behavior(::mvp_msgs::msg::SetpointBehavior & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::SetpointBehavior behavior(::mvp_msgs::msg::SetpointBehavior::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::SetpointBehavior msg_;
};

class Init_SetpointBehavior_control_mode
{
public:
  explicit Init_SetpointBehavior_control_mode(::mvp_msgs::msg::SetpointBehavior & msg)
  : msg_(msg)
  {}
  Init_SetpointBehavior_behavior control_mode(::mvp_msgs::msg::SetpointBehavior::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_SetpointBehavior_behavior(msg_);
  }

private:
  ::mvp_msgs::msg::SetpointBehavior msg_;
};

class Init_SetpointBehavior_child_frame_id
{
public:
  explicit Init_SetpointBehavior_child_frame_id(::mvp_msgs::msg::SetpointBehavior & msg)
  : msg_(msg)
  {}
  Init_SetpointBehavior_control_mode child_frame_id(::mvp_msgs::msg::SetpointBehavior::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_SetpointBehavior_control_mode(msg_);
  }

private:
  ::mvp_msgs::msg::SetpointBehavior msg_;
};

class Init_SetpointBehavior_header
{
public:
  Init_SetpointBehavior_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetpointBehavior_child_frame_id header(::mvp_msgs::msg::SetpointBehavior::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetpointBehavior_child_frame_id(msg_);
  }

private:
  ::mvp_msgs::msg::SetpointBehavior msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::SetpointBehavior>()
{
  return mvp_msgs::msg::builder::Init_SetpointBehavior_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__BUILDER_HPP_
