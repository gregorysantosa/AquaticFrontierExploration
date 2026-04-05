// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/bool_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_BoolStamped_flag
{
public:
  explicit Init_BoolStamped_flag(::acomms_msgs::msg::BoolStamped & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::BoolStamped flag(::acomms_msgs::msg::BoolStamped::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::BoolStamped msg_;
};

class Init_BoolStamped_header
{
public:
  Init_BoolStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoolStamped_flag header(::acomms_msgs::msg::BoolStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoolStamped_flag(msg_);
  }

private:
  ::acomms_msgs::msg::BoolStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::BoolStamped>()
{
  return acomms_msgs::msg::builder::Init_BoolStamped_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
