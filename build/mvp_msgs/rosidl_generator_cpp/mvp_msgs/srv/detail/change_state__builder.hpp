// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__CHANGE_STATE__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__CHANGE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/change_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeState_Request_caller
{
public:
  explicit Init_ChangeState_Request_caller(::mvp_msgs::srv::ChangeState_Request & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::srv::ChangeState_Request caller(::mvp_msgs::srv::ChangeState_Request::_caller_type arg)
  {
    msg_.caller = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::ChangeState_Request msg_;
};

class Init_ChangeState_Request_state
{
public:
  Init_ChangeState_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeState_Request_caller state(::mvp_msgs::srv::ChangeState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ChangeState_Request_caller(msg_);
  }

private:
  ::mvp_msgs::srv::ChangeState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::ChangeState_Request>()
{
  return mvp_msgs::srv::builder::Init_ChangeState_Request_state();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeState_Response_state
{
public:
  explicit Init_ChangeState_Response_state(::mvp_msgs::srv::ChangeState_Response & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::srv::ChangeState_Response state(::mvp_msgs::srv::ChangeState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::ChangeState_Response msg_;
};

class Init_ChangeState_Response_status
{
public:
  Init_ChangeState_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeState_Response_state status(::mvp_msgs::srv::ChangeState_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChangeState_Response_state(msg_);
  }

private:
  ::mvp_msgs::srv::ChangeState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::ChangeState_Response>()
{
  return mvp_msgs::srv::builder::Init_ChangeState_Response_status();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__CHANGE_STATE__BUILDER_HPP_
