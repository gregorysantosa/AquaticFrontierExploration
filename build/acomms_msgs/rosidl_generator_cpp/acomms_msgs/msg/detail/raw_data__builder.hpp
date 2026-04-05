// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__RAW_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/raw_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_RawData_data
{
public:
  explicit Init_RawData_data(::acomms_msgs::msg::RawData & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::RawData data(::acomms_msgs::msg::RawData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::RawData msg_;
};

class Init_RawData_header
{
public:
  Init_RawData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawData_data header(::acomms_msgs::msg::RawData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawData_data(msg_);
  }

private:
  ::acomms_msgs::msg::RawData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::RawData>()
{
  return acomms_msgs::msg::builder::Init_RawData_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
