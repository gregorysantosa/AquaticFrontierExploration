// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/UsblPhyd.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/usbl_phyd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_UsblPhyd_delay_3_4
{
public:
  explicit Init_UsblPhyd_delay_3_4(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::UsblPhyd delay_3_4(::acomms_msgs::msg::UsblPhyd::_delay_3_4_type arg)
  {
    msg_.delay_3_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_3_2
{
public:
  explicit Init_UsblPhyd_delay_3_2(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_3_4 delay_3_2(::acomms_msgs::msg::UsblPhyd::_delay_3_2_type arg)
  {
    msg_.delay_3_2 = std::move(arg);
    return Init_UsblPhyd_delay_3_4(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_4_1
{
public:
  explicit Init_UsblPhyd_delay_4_1(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_3_2 delay_4_1(::acomms_msgs::msg::UsblPhyd::_delay_4_1_type arg)
  {
    msg_.delay_4_1 = std::move(arg);
    return Init_UsblPhyd_delay_3_2(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_1_2
{
public:
  explicit Init_UsblPhyd_delay_1_2(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_4_1 delay_1_2(::acomms_msgs::msg::UsblPhyd::_delay_1_2_type arg)
  {
    msg_.delay_1_2 = std::move(arg);
    return Init_UsblPhyd_delay_4_1(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_4_5
{
public:
  explicit Init_UsblPhyd_delay_4_5(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_1_2 delay_4_5(::acomms_msgs::msg::UsblPhyd::_delay_4_5_type arg)
  {
    msg_.delay_4_5 = std::move(arg);
    return Init_UsblPhyd_delay_1_2(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_3_5
{
public:
  explicit Init_UsblPhyd_delay_3_5(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_4_5 delay_3_5(::acomms_msgs::msg::UsblPhyd::_delay_3_5_type arg)
  {
    msg_.delay_3_5 = std::move(arg);
    return Init_UsblPhyd_delay_4_5(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_2_5
{
public:
  explicit Init_UsblPhyd_delay_2_5(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_3_5 delay_2_5(::acomms_msgs::msg::UsblPhyd::_delay_2_5_type arg)
  {
    msg_.delay_2_5 = std::move(arg);
    return Init_UsblPhyd_delay_3_5(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_delay_1_5
{
public:
  explicit Init_UsblPhyd_delay_1_5(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_2_5 delay_1_5(::acomms_msgs::msg::UsblPhyd::_delay_1_5_type arg)
  {
    msg_.delay_1_5 = std::move(arg);
    return Init_UsblPhyd_delay_2_5(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_fix_type
{
public:
  explicit Init_UsblPhyd_fix_type(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_delay_1_5 fix_type(::acomms_msgs::msg::UsblPhyd::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_UsblPhyd_delay_1_5(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_remote_address
{
public:
  explicit Init_UsblPhyd_remote_address(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_fix_type remote_address(::acomms_msgs::msg::UsblPhyd::_remote_address_type arg)
  {
    msg_.remote_address = std::move(arg);
    return Init_UsblPhyd_fix_type(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_measurement_time
{
public:
  explicit Init_UsblPhyd_measurement_time(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_remote_address measurement_time(::acomms_msgs::msg::UsblPhyd::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_UsblPhyd_remote_address(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_current_time
{
public:
  explicit Init_UsblPhyd_current_time(::acomms_msgs::msg::UsblPhyd & msg)
  : msg_(msg)
  {}
  Init_UsblPhyd_measurement_time current_time(::acomms_msgs::msg::UsblPhyd::_current_time_type arg)
  {
    msg_.current_time = std::move(arg);
    return Init_UsblPhyd_measurement_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

class Init_UsblPhyd_header
{
public:
  Init_UsblPhyd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UsblPhyd_current_time header(::acomms_msgs::msg::UsblPhyd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UsblPhyd_current_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblPhyd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::UsblPhyd>()
{
  return acomms_msgs::msg::builder::Init_UsblPhyd_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__BUILDER_HPP_
