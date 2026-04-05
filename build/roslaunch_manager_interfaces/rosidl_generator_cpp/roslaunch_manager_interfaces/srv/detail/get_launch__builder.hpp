// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roslaunch_manager_interfaces:srv/GetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__BUILDER_HPP_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roslaunch_manager_interfaces/srv/detail/get_launch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roslaunch_manager_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roslaunch_manager_interfaces::srv::GetLaunch_Request>()
{
  return ::roslaunch_manager_interfaces::srv::GetLaunch_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace roslaunch_manager_interfaces


namespace roslaunch_manager_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLaunch_Response_list
{
public:
  Init_GetLaunch_Response_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roslaunch_manager_interfaces::srv::GetLaunch_Response list(::roslaunch_manager_interfaces::srv::GetLaunch_Response::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roslaunch_manager_interfaces::srv::GetLaunch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roslaunch_manager_interfaces::srv::GetLaunch_Response>()
{
  return roslaunch_manager_interfaces::srv::builder::Init_GetLaunch_Response_list();
}

}  // namespace roslaunch_manager_interfaces

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__BUILDER_HPP_
