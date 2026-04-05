// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/set_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Request_data
{
public:
  Init_SetString_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::SetString_Request data(::mvp_msgs::srv::SetString_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::SetString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::SetString_Request>()
{
  return mvp_msgs::srv::builder::Init_SetString_Request_data();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Response_message
{
public:
  explicit Init_SetString_Response_message(::mvp_msgs::srv::SetString_Response & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::srv::SetString_Response message(::mvp_msgs::srv::SetString_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::SetString_Response msg_;
};

class Init_SetString_Response_success
{
public:
  Init_SetString_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetString_Response_message success(::mvp_msgs::srv::SetString_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetString_Response_message(msg_);
  }

private:
  ::mvp_msgs::srv::SetString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::SetString_Response>()
{
  return mvp_msgs::srv::builder::Init_SetString_Response_success();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_
