// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATE__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/get_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_GetState_Request_name
{
public:
  Init_GetState_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::GetState_Request name(::mvp_msgs::srv::GetState_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::GetState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetState_Request>()
{
  return mvp_msgs::srv::builder::Init_GetState_Request_name();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_GetState_Response_state
{
public:
  Init_GetState_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::GetState_Response state(::mvp_msgs::srv::GetState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::GetState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetState_Response>()
{
  return mvp_msgs::srv::builder::Init_GetState_Response_state();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATE__BUILDER_HPP_
