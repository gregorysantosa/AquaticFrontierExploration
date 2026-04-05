// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/PidGains.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__PID_GAINS__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__PID_GAINS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/pid_gains__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_PidGains_pid_min
{
public:
  explicit Init_PidGains_pid_min(::mvp_msgs::msg::PidGains & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::PidGains pid_min(::mvp_msgs::msg::PidGains::_pid_min_type arg)
  {
    msg_.pid_min = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::PidGains msg_;
};

class Init_PidGains_pid_max
{
public:
  explicit Init_PidGains_pid_max(::mvp_msgs::msg::PidGains & msg)
  : msg_(msg)
  {}
  Init_PidGains_pid_min pid_max(::mvp_msgs::msg::PidGains::_pid_max_type arg)
  {
    msg_.pid_max = std::move(arg);
    return Init_PidGains_pid_min(msg_);
  }

private:
  ::mvp_msgs::msg::PidGains msg_;
};

class Init_PidGains_kv
{
public:
  explicit Init_PidGains_kv(::mvp_msgs::msg::PidGains & msg)
  : msg_(msg)
  {}
  Init_PidGains_pid_max kv(::mvp_msgs::msg::PidGains::_kv_type arg)
  {
    msg_.kv = std::move(arg);
    return Init_PidGains_pid_max(msg_);
  }

private:
  ::mvp_msgs::msg::PidGains msg_;
};

class Init_PidGains_kd
{
public:
  explicit Init_PidGains_kd(::mvp_msgs::msg::PidGains & msg)
  : msg_(msg)
  {}
  Init_PidGains_kv kd(::mvp_msgs::msg::PidGains::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_PidGains_kv(msg_);
  }

private:
  ::mvp_msgs::msg::PidGains msg_;
};

class Init_PidGains_ki
{
public:
  explicit Init_PidGains_ki(::mvp_msgs::msg::PidGains & msg)
  : msg_(msg)
  {}
  Init_PidGains_kd ki(::mvp_msgs::msg::PidGains::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PidGains_kd(msg_);
  }

private:
  ::mvp_msgs::msg::PidGains msg_;
};

class Init_PidGains_kp
{
public:
  Init_PidGains_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PidGains_ki kp(::mvp_msgs::msg::PidGains::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PidGains_ki(msg_);
  }

private:
  ::mvp_msgs::msg::PidGains msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::PidGains>()
{
  return mvp_msgs::msg::builder::Init_PidGains_kp();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__PID_GAINS__BUILDER_HPP_
