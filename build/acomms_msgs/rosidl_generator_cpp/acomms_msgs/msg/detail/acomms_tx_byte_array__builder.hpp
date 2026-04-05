// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/AcommsTxByteArray.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX_BYTE_ARRAY__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX_BYTE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/acomms_tx_byte_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_AcommsTxByteArray_msg
{
public:
  explicit Init_AcommsTxByteArray_msg(::acomms_msgs::msg::AcommsTxByteArray & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::AcommsTxByteArray msg(::acomms_msgs::msg::AcommsTxByteArray::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsTxByteArray msg_;
};

class Init_AcommsTxByteArray_subbuffer_id
{
public:
  explicit Init_AcommsTxByteArray_subbuffer_id(::acomms_msgs::msg::AcommsTxByteArray & msg)
  : msg_(msg)
  {}
  Init_AcommsTxByteArray_msg subbuffer_id(::acomms_msgs::msg::AcommsTxByteArray::_subbuffer_id_type arg)
  {
    msg_.subbuffer_id = std::move(arg);
    return Init_AcommsTxByteArray_msg(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsTxByteArray msg_;
};

class Init_AcommsTxByteArray_header
{
public:
  Init_AcommsTxByteArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcommsTxByteArray_subbuffer_id header(::acomms_msgs::msg::AcommsTxByteArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcommsTxByteArray_subbuffer_id(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsTxByteArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::AcommsTxByteArray>()
{
  return acomms_msgs::msg::builder::Init_AcommsTxByteArray_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX_BYTE_ARRAY__BUILDER_HPP_
