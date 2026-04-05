// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlMode_pid_r
{
public:
  explicit Init_ControlMode_pid_r(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::ControlMode pid_r(::mvp_msgs::msg::ControlMode::_pid_r_type arg)
  {
    msg_.pid_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_q
{
public:
  explicit Init_ControlMode_pid_q(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_r pid_q(::mvp_msgs::msg::ControlMode::_pid_q_type arg)
  {
    msg_.pid_q = std::move(arg);
    return Init_ControlMode_pid_r(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_p
{
public:
  explicit Init_ControlMode_pid_p(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_q pid_p(::mvp_msgs::msg::ControlMode::_pid_p_type arg)
  {
    msg_.pid_p = std::move(arg);
    return Init_ControlMode_pid_q(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_w
{
public:
  explicit Init_ControlMode_pid_w(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_p pid_w(::mvp_msgs::msg::ControlMode::_pid_w_type arg)
  {
    msg_.pid_w = std::move(arg);
    return Init_ControlMode_pid_p(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_v
{
public:
  explicit Init_ControlMode_pid_v(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_w pid_v(::mvp_msgs::msg::ControlMode::_pid_v_type arg)
  {
    msg_.pid_v = std::move(arg);
    return Init_ControlMode_pid_w(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_u
{
public:
  explicit Init_ControlMode_pid_u(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_v pid_u(::mvp_msgs::msg::ControlMode::_pid_u_type arg)
  {
    msg_.pid_u = std::move(arg);
    return Init_ControlMode_pid_v(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_yaw
{
public:
  explicit Init_ControlMode_pid_yaw(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_u pid_yaw(::mvp_msgs::msg::ControlMode::_pid_yaw_type arg)
  {
    msg_.pid_yaw = std::move(arg);
    return Init_ControlMode_pid_u(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_pitch
{
public:
  explicit Init_ControlMode_pid_pitch(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_yaw pid_pitch(::mvp_msgs::msg::ControlMode::_pid_pitch_type arg)
  {
    msg_.pid_pitch = std::move(arg);
    return Init_ControlMode_pid_yaw(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_roll
{
public:
  explicit Init_ControlMode_pid_roll(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_pitch pid_roll(::mvp_msgs::msg::ControlMode::_pid_roll_type arg)
  {
    msg_.pid_roll = std::move(arg);
    return Init_ControlMode_pid_pitch(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_z
{
public:
  explicit Init_ControlMode_pid_z(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_roll pid_z(::mvp_msgs::msg::ControlMode::_pid_z_type arg)
  {
    msg_.pid_z = std::move(arg);
    return Init_ControlMode_pid_roll(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_y
{
public:
  explicit Init_ControlMode_pid_y(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_z pid_y(::mvp_msgs::msg::ControlMode::_pid_y_type arg)
  {
    msg_.pid_y = std::move(arg);
    return Init_ControlMode_pid_z(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_pid_x
{
public:
  explicit Init_ControlMode_pid_x(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_y pid_x(::mvp_msgs::msg::ControlMode::_pid_x_type arg)
  {
    msg_.pid_x = std::move(arg);
    return Init_ControlMode_pid_y(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_dofs
{
public:
  explicit Init_ControlMode_dofs(::mvp_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_pid_x dofs(::mvp_msgs::msg::ControlMode::_dofs_type arg)
  {
    msg_.dofs = std::move(arg);
    return Init_ControlMode_pid_x(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_name
{
public:
  Init_ControlMode_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMode_dofs name(::mvp_msgs::msg::ControlMode::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControlMode_dofs(msg_);
  }

private:
  ::mvp_msgs::msg::ControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::ControlMode>()
{
  return mvp_msgs::msg::builder::Init_ControlMode_name();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
