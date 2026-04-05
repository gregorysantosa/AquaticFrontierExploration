// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/get_control_modes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetControlModes_Request>()
{
  return ::mvp_msgs::srv::GetControlModes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_GetControlModes_Response_modes
{
public:
  Init_GetControlModes_Response_modes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::GetControlModes_Response modes(::mvp_msgs::srv::GetControlModes_Response::_modes_type arg)
  {
    msg_.modes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::GetControlModes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetControlModes_Response>()
{
  return mvp_msgs::srv::builder::Init_GetControlModes_Response_modes();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__BUILDER_HPP_
