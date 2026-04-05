// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_Power_current
{
public:
  explicit Init_Power_current(::mvp_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::Power current(::mvp_msgs::msg::Power::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::Power msg_;
};

class Init_Power_voltage
{
public:
  explicit Init_Power_voltage(::mvp_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_current voltage(::mvp_msgs::msg::Power::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_Power_current(msg_);
  }

private:
  ::mvp_msgs::msg::Power msg_;
};

class Init_Power_header
{
public:
  Init_Power_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Power_voltage header(::mvp_msgs::msg::Power::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Power_voltage(msg_);
  }

private:
  ::mvp_msgs::msg::Power msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::Power>()
{
  return mvp_msgs::msg::builder::Init_Power_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
