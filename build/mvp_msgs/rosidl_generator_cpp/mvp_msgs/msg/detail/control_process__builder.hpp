// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/ControlProcess.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_PROCESS__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_PROCESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/control_process__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlProcess_angular_rate
{
public:
  explicit Init_ControlProcess_angular_rate(::mvp_msgs::msg::ControlProcess & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::ControlProcess angular_rate(::mvp_msgs::msg::ControlProcess::_angular_rate_type arg)
  {
    msg_.angular_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

class Init_ControlProcess_velocity
{
public:
  explicit Init_ControlProcess_velocity(::mvp_msgs::msg::ControlProcess & msg)
  : msg_(msg)
  {}
  Init_ControlProcess_angular_rate velocity(::mvp_msgs::msg::ControlProcess::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ControlProcess_angular_rate(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

class Init_ControlProcess_child_frame_id
{
public:
  explicit Init_ControlProcess_child_frame_id(::mvp_msgs::msg::ControlProcess & msg)
  : msg_(msg)
  {}
  Init_ControlProcess_velocity child_frame_id(::mvp_msgs::msg::ControlProcess::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_ControlProcess_velocity(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

class Init_ControlProcess_orientation
{
public:
  explicit Init_ControlProcess_orientation(::mvp_msgs::msg::ControlProcess & msg)
  : msg_(msg)
  {}
  Init_ControlProcess_child_frame_id orientation(::mvp_msgs::msg::ControlProcess::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ControlProcess_child_frame_id(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

class Init_ControlProcess_position
{
public:
  explicit Init_ControlProcess_position(::mvp_msgs::msg::ControlProcess & msg)
  : msg_(msg)
  {}
  Init_ControlProcess_orientation position(::mvp_msgs::msg::ControlProcess::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ControlProcess_orientation(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

class Init_ControlProcess_control_mode
{
public:
  explicit Init_ControlProcess_control_mode(::mvp_msgs::msg::ControlProcess & msg)
  : msg_(msg)
  {}
  Init_ControlProcess_position control_mode(::mvp_msgs::msg::ControlProcess::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_ControlProcess_position(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

class Init_ControlProcess_header
{
public:
  Init_ControlProcess_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlProcess_control_mode header(::mvp_msgs::msg::ControlProcess::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlProcess_control_mode(msg_);
  }

private:
  ::mvp_msgs::msg::ControlProcess msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::ControlProcess>()
{
  return mvp_msgs::msg::builder::Init_ControlProcess_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_PROCESS__BUILDER_HPP_
