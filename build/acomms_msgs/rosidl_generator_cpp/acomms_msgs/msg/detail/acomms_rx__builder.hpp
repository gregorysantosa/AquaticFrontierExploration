// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/AcommsRx.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/acomms_rx__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_AcommsRx_data
{
public:
  explicit Init_AcommsRx_data(::acomms_msgs::msg::AcommsRx & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::AcommsRx data(::acomms_msgs::msg::AcommsRx::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsRx msg_;
};

class Init_AcommsRx_header
{
public:
  Init_AcommsRx_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcommsRx_data header(::acomms_msgs::msg::AcommsRx::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcommsRx_data(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsRx msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::AcommsRx>()
{
  return acomms_msgs::msg::builder::Init_AcommsRx_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX__BUILDER_HPP_
