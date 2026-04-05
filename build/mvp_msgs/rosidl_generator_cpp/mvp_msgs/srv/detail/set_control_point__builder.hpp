// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/SetControlPoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/set_control_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_SetControlPoint_Request_setpoint
{
public:
  Init_SetControlPoint_Request_setpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::SetControlPoint_Request setpoint(::mvp_msgs::srv::SetControlPoint_Request::_setpoint_type arg)
  {
    msg_.setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::SetControlPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::SetControlPoint_Request>()
{
  return mvp_msgs::srv::builder::Init_SetControlPoint_Request_setpoint();
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::SetControlPoint_Response>()
{
  return ::mvp_msgs::srv::SetControlPoint_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__BUILDER_HPP_
