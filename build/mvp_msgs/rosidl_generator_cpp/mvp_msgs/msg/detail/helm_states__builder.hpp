// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/HelmStates.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATES__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__HELM_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/helm_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_HelmStates_states
{
public:
  Init_HelmStates_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::msg::HelmStates states(::mvp_msgs::msg::HelmStates::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::HelmStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::HelmStates>()
{
  return mvp_msgs::msg::builder::Init_HelmStates_states();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATES__BUILDER_HPP_
