// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acomms_msgs:msg/AcommsTx.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__BUILDER_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acomms_msgs/msg/detail/acomms_tx__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acomms_msgs
{

namespace msg
{

namespace builder
{

class Init_AcommsTx_data
{
public:
  explicit Init_AcommsTx_data(::acomms_msgs::msg::AcommsTx & msg)
  : msg_(msg)
  {}
  ::acomms_msgs::msg::AcommsTx data(::acomms_msgs::msg::AcommsTx::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsTx msg_;
};

class Init_AcommsTx_subbuffer_id
{
public:
  explicit Init_AcommsTx_subbuffer_id(::acomms_msgs::msg::AcommsTx & msg)
  : msg_(msg)
  {}
  Init_AcommsTx_data subbuffer_id(::acomms_msgs::msg::AcommsTx::_subbuffer_id_type arg)
  {
    msg_.subbuffer_id = std::move(arg);
    return Init_AcommsTx_data(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsTx msg_;
};

class Init_AcommsTx_header
{
public:
  Init_AcommsTx_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcommsTx_subbuffer_id header(::acomms_msgs::msg::AcommsTx::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcommsTx_subbuffer_id(msg_);
  }

private:
  ::acomms_msgs::msg::AcommsTx msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::acomms_msgs::msg::AcommsTx>()
{
  return acomms_msgs::msg::builder::Init_AcommsTx_header();
}

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__BUILDER_HPP_
