// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/PwmSignal.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/pwm_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_PwmSignal_channel
{
public:
  explicit Init_PwmSignal_channel(::mvp_msgs::msg::PwmSignal & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::PwmSignal channel(::mvp_msgs::msg::PwmSignal::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::PwmSignal msg_;
};

class Init_PwmSignal_signal
{
public:
  Init_PwmSignal_signal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PwmSignal_channel signal(::mvp_msgs::msg::PwmSignal::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return Init_PwmSignal_channel(msg_);
  }

private:
  ::mvp_msgs::msg::PwmSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::PwmSignal>()
{
  return mvp_msgs::msg::builder::Init_PwmSignal_signal();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__BUILDER_HPP_
