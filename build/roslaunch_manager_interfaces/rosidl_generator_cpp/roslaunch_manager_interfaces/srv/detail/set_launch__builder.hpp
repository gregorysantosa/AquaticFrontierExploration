// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roslaunch_manager_interfaces:srv/SetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__BUILDER_HPP_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roslaunch_manager_interfaces/srv/detail/set_launch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roslaunch_manager_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLaunch_Request_set
{
public:
  explicit Init_SetLaunch_Request_set(::roslaunch_manager_interfaces::srv::SetLaunch_Request & msg)
  : msg_(msg)
  {}
  ::roslaunch_manager_interfaces::srv::SetLaunch_Request set(::roslaunch_manager_interfaces::srv::SetLaunch_Request::_set_type arg)
  {
    msg_.set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roslaunch_manager_interfaces::srv::SetLaunch_Request msg_;
};

class Init_SetLaunch_Request_file
{
public:
  explicit Init_SetLaunch_Request_file(::roslaunch_manager_interfaces::srv::SetLaunch_Request & msg)
  : msg_(msg)
  {}
  Init_SetLaunch_Request_set file(::roslaunch_manager_interfaces::srv::SetLaunch_Request::_file_type arg)
  {
    msg_.file = std::move(arg);
    return Init_SetLaunch_Request_set(msg_);
  }

private:
  ::roslaunch_manager_interfaces::srv::SetLaunch_Request msg_;
};

class Init_SetLaunch_Request_pkg
{
public:
  Init_SetLaunch_Request_pkg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLaunch_Request_file pkg(::roslaunch_manager_interfaces::srv::SetLaunch_Request::_pkg_type arg)
  {
    msg_.pkg = std::move(arg);
    return Init_SetLaunch_Request_file(msg_);
  }

private:
  ::roslaunch_manager_interfaces::srv::SetLaunch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roslaunch_manager_interfaces::srv::SetLaunch_Request>()
{
  return roslaunch_manager_interfaces::srv::builder::Init_SetLaunch_Request_pkg();
}

}  // namespace roslaunch_manager_interfaces


namespace roslaunch_manager_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLaunch_Response_message
{
public:
  explicit Init_SetLaunch_Response_message(::roslaunch_manager_interfaces::srv::SetLaunch_Response & msg)
  : msg_(msg)
  {}
  ::roslaunch_manager_interfaces::srv::SetLaunch_Response message(::roslaunch_manager_interfaces::srv::SetLaunch_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roslaunch_manager_interfaces::srv::SetLaunch_Response msg_;
};

class Init_SetLaunch_Response_success
{
public:
  Init_SetLaunch_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLaunch_Response_message success(::roslaunch_manager_interfaces::srv::SetLaunch_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLaunch_Response_message(msg_);
  }

private:
  ::roslaunch_manager_interfaces::srv::SetLaunch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roslaunch_manager_interfaces::srv::SetLaunch_Response>()
{
  return roslaunch_manager_interfaces::srv::builder::Init_SetLaunch_Response_success();
}

}  // namespace roslaunch_manager_interfaces

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__BUILDER_HPP_
