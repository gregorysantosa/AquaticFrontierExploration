// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/usbl_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_UsblAngles_accuracy
{
public:
  explicit Init_UsblAngles_accuracy(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::UsblAngles accuracy(::acomms_msgs::msg::UsblAngles::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_signal_integrity
{
public:
  explicit Init_UsblAngles_signal_integrity(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_accuracy signal_integrity(::acomms_msgs::msg::UsblAngles::_signal_integrity_type arg)
  {
    msg_.signal_integrity = std::move(arg);
    return Init_UsblAngles_accuracy(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_rssi
{
public:
  explicit Init_UsblAngles_rssi(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_signal_integrity rssi(::acomms_msgs::msg::UsblAngles::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_UsblAngles_signal_integrity(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_yaw
{
public:
  explicit Init_UsblAngles_yaw(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_rssi yaw(::acomms_msgs::msg::UsblAngles::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_UsblAngles_rssi(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_pitch
{
public:
  explicit Init_UsblAngles_pitch(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_yaw pitch(::acomms_msgs::msg::UsblAngles::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_UsblAngles_yaw(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_roll
{
public:
  explicit Init_UsblAngles_roll(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_pitch roll(::acomms_msgs::msg::UsblAngles::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_UsblAngles_pitch(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_elevation
{
public:
  explicit Init_UsblAngles_elevation(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_roll elevation(::acomms_msgs::msg::UsblAngles::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_UsblAngles_roll(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_bearing
{
public:
  explicit Init_UsblAngles_bearing(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_elevation bearing(::acomms_msgs::msg::UsblAngles::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_UsblAngles_elevation(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_local_elevation
{
public:
  explicit Init_UsblAngles_local_elevation(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_bearing local_elevation(::acomms_msgs::msg::UsblAngles::_local_elevation_type arg)
  {
    msg_.local_elevation = std::move(arg);
    return Init_UsblAngles_bearing(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_local_bearing
{
public:
  explicit Init_UsblAngles_local_bearing(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_local_elevation local_bearing(::acomms_msgs::msg::UsblAngles::_local_bearing_type arg)
  {
    msg_.local_bearing = std::move(arg);
    return Init_UsblAngles_local_elevation(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_remote_address
{
public:
  explicit Init_UsblAngles_remote_address(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_local_bearing remote_address(::acomms_msgs::msg::UsblAngles::_remote_address_type arg)
  {
    msg_.remote_address = std::move(arg);
    return Init_UsblAngles_local_bearing(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_measurement_time
{
public:
  explicit Init_UsblAngles_measurement_time(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_remote_address measurement_time(::acomms_msgs::msg::UsblAngles::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_UsblAngles_remote_address(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_current_time
{
public:
  explicit Init_UsblAngles_current_time(::acomms_msgs::msg::UsblAngles & msg)
  : msg_(msg)
  {}
  Init_UsblAngles_measurement_time current_time(::acomms_msgs::msg::UsblAngles::_current_time_type arg)
  {
    msg_.current_time = std::move(arg);
    return Init_UsblAngles_measurement_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

class Init_UsblAngles_header
{
public:
  Init_UsblAngles_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UsblAngles_current_time header(::acomms_msgs::msg::UsblAngles::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UsblAngles_current_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::UsblAngles>()
{
  return acomms_msgs::msg::builder::Init_UsblAngles_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__BUILDER_HPP_
