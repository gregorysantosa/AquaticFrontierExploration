// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/ControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODES__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/control_modes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlModes_modes
{
public:
  Init_ControlModes_modes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::msg::ControlModes modes(::mvp_msgs::msg::ControlModes::_modes_type arg)
  {
    msg_.modes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::ControlModes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::ControlModes>()
{
  return mvp_msgs::msg::builder::Init_ControlModes_modes();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODES__BUILDER_HPP_
