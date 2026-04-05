// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/UsblData.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/usbl_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_UsblData_accuracy
{
public:
  explicit Init_UsblData_accuracy(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::UsblData accuracy(::acomms_msgs::msg::UsblData::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_integrity
{
public:
  explicit Init_UsblData_integrity(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_accuracy integrity(::acomms_msgs::msg::UsblData::_integrity_type arg)
  {
    msg_.integrity = std::move(arg);
    return Init_UsblData_accuracy(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_rssi
{
public:
  explicit Init_UsblData_rssi(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_integrity rssi(::acomms_msgs::msg::UsblData::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_UsblData_integrity(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_propagation_time
{
public:
  explicit Init_UsblData_propagation_time(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_rssi propagation_time(::acomms_msgs::msg::UsblData::_propagation_time_type arg)
  {
    msg_.propagation_time = std::move(arg);
    return Init_UsblData_rssi(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_orientation
{
public:
  explicit Init_UsblData_orientation(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_propagation_time orientation(::acomms_msgs::msg::UsblData::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_UsblData_propagation_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_enu
{
public:
  explicit Init_UsblData_enu(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_orientation enu(::acomms_msgs::msg::UsblData::_enu_type arg)
  {
    msg_.enu = std::move(arg);
    return Init_UsblData_orientation(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_xyz
{
public:
  explicit Init_UsblData_xyz(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_enu xyz(::acomms_msgs::msg::UsblData::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return Init_UsblData_enu(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_remote_address
{
public:
  explicit Init_UsblData_remote_address(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_xyz remote_address(::acomms_msgs::msg::UsblData::_remote_address_type arg)
  {
    msg_.remote_address = std::move(arg);
    return Init_UsblData_xyz(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_measurement_time
{
public:
  explicit Init_UsblData_measurement_time(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_remote_address measurement_time(::acomms_msgs::msg::UsblData::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_UsblData_remote_address(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_current_time
{
public:
  explicit Init_UsblData_current_time(::acomms_msgs::msg::UsblData & msg)
  : msg_(msg)
  {}
  Init_UsblData_measurement_time current_time(::acomms_msgs::msg::UsblData::_current_time_type arg)
  {
    msg_.current_time = std::move(arg);
    return Init_UsblData_measurement_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

class Init_UsblData_header
{
public:
  Init_UsblData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UsblData_current_time header(::acomms_msgs::msg::UsblData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UsblData_current_time(msg_);
  }

private:
  ::acomms_msgs::msg::UsblData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::UsblData>()
{
  return acomms_msgs::msg::builder::Init_UsblData_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__BUILDER_HPP_
