// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/NMEA.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__NMEA__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__NMEA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/nmea__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_NMEA_values
{
public:
  explicit Init_NMEA_values(::mvp_msgs::msg::NMEA & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::NMEA values(::mvp_msgs::msg::NMEA::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::NMEA msg_;
};

class Init_NMEA_command
{
public:
  explicit Init_NMEA_command(::mvp_msgs::msg::NMEA & msg)
  : msg_(msg)
  {}
  Init_NMEA_values command(::mvp_msgs::msg::NMEA::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_NMEA_values(msg_);
  }

private:
  ::mvp_msgs::msg::NMEA msg_;
};

class Init_NMEA_header
{
public:
  Init_NMEA_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NMEA_command header(::mvp_msgs::msg::NMEA::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NMEA_command(msg_);
  }

private:
  ::mvp_msgs::msg::NMEA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::NMEA>()
{
  return mvp_msgs::msg::builder::Init_NMEA_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__NMEA__BUILDER_HPP_
