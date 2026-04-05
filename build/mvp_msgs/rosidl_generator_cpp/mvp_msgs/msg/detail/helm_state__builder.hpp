// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/HelmState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATE__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__HELM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/helm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_HelmState_exit_state
{
public:
  explicit Init_HelmState_exit_state(::mvp_msgs::msg::HelmState & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::HelmState exit_state(::mvp_msgs::msg::HelmState::_exit_state_type arg)
  {
    msg_.exit_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::HelmState msg_;
};

class Init_HelmState_max_duration
{
public:
  explicit Init_HelmState_max_duration(::mvp_msgs::msg::HelmState & msg)
  : msg_(msg)
  {}
  Init_HelmState_exit_state max_duration(::mvp_msgs::msg::HelmState::_max_duration_type arg)
  {
    msg_.max_duration = std::move(arg);
    return Init_HelmState_exit_state(msg_);
  }

private:
  ::mvp_msgs::msg::HelmState msg_;
};

class Init_HelmState_transitions
{
public:
  explicit Init_HelmState_transitions(::mvp_msgs::msg::HelmState & msg)
  : msg_(msg)
  {}
  Init_HelmState_max_duration transitions(::mvp_msgs::msg::HelmState::_transitions_type arg)
  {
    msg_.transitions = std::move(arg);
    return Init_HelmState_max_duration(msg_);
  }

private:
  ::mvp_msgs::msg::HelmState msg_;
};

class Init_HelmState_mode
{
public:
  explicit Init_HelmState_mode(::mvp_msgs::msg::HelmState & msg)
  : msg_(msg)
  {}
  Init_HelmState_transitions mode(::mvp_msgs::msg::HelmState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HelmState_transitions(msg_);
  }

private:
  ::mvp_msgs::msg::HelmState msg_;
};

class Init_HelmState_name
{
public:
  Init_HelmState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HelmState_mode name(::mvp_msgs::msg::HelmState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HelmState_mode(msg_);
  }

private:
  ::mvp_msgs::msg::HelmState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::HelmState>()
{
  return mvp_msgs::msg::builder::Init_HelmState_name();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATE__BUILDER_HPP_
