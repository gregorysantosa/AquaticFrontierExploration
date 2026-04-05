// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/AcommsRxByteArray.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/acomms_rx_byte_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_AcommsRxByteArray_msg
{
public:
  explicit Init_AcommsRxByteArray_msg(::acomms_msgs::msg::AcommsRxByteArray & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::AcommsRxByteArray msg(::acomms_msgs::msg::AcommsRxByteArray::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsRxByteArray msg_;
};

class Init_AcommsRxByteArray_header
{
public:
  Init_AcommsRxByteArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcommsRxByteArray_msg header(::acomms_msgs::msg::AcommsRxByteArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcommsRxByteArray_msg(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsRxByteArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::AcommsRxByteArray>()
{
  return acomms_msgs::msg::builder::Init_AcommsRxByteArray_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__BUILDER_HPP_
