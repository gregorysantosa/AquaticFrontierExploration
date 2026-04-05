// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/float64_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64Stamped_data
{
public:
  explicit Init_Float64Stamped_data(::mvp_msgs::msg::Float64Stamped & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::Float64Stamped data(::mvp_msgs::msg::Float64Stamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::Float64Stamped msg_;
};

class Init_Float64Stamped_header
{
public:
  Init_Float64Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64Stamped_data header(::mvp_msgs::msg::Float64Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Float64Stamped_data(msg_);
  }

private:
  ::mvp_msgs::msg::Float64Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::Float64Stamped>()
{
  return mvp_msgs::msg::builder::Init_Float64Stamped_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_
