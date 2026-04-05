// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:srv/GetStates.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATES__BUILDER_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/srv/detail/get_states__struct.hpp"
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
auto build<::mvp_msgs::srv::GetStates_Request>()
{
  return ::mvp_msgs::srv::GetStates_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mvp_msgs


namespace mvp_msgs
{

namespace srv
{

namespace builder
{

class Init_GetStates_Response_states
{
public:
  Init_GetStates_Response_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mvp_msgs::srv::GetStates_Response states(::mvp_msgs::srv::GetStates_Response::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::srv::GetStates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::srv::GetStates_Response>()
{
  return mvp_msgs::srv::builder::Init_GetStates_Response_states();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATES__BUILDER_HPP_
