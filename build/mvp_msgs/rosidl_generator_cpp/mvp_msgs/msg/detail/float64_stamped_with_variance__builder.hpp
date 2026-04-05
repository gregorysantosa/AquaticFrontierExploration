// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mvp_msgs:msg/Float64StampedWithVariance.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__FLOAT64_STAMPED_WITH_VARIANCE__BUILDER_HPP_
#define MVP_MSGS__MSG__DETAIL__FLOAT64_STAMPED_WITH_VARIANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mvp_msgs/msg/detail/float64_stamped_with_variance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mvp_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64StampedWithVariance_variance
{
public:
  explicit Init_Float64StampedWithVariance_variance(::mvp_msgs::msg::Float64StampedWithVariance & msg)
  : msg_(msg)
  {}
  ::mvp_msgs::msg::Float64StampedWithVariance variance(::mvp_msgs::msg::Float64StampedWithVariance::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mvp_msgs::msg::Float64StampedWithVariance msg_;
};

class Init_Float64StampedWithVariance_data
{
public:
  explicit Init_Float64StampedWithVariance_data(::mvp_msgs::msg::Float64StampedWithVariance & msg)
  : msg_(msg)
  {}
  Init_Float64StampedWithVariance_variance data(::mvp_msgs::msg::Float64StampedWithVariance::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Float64StampedWithVariance_variance(msg_);
  }

private:
  ::mvp_msgs::msg::Float64StampedWithVariance msg_;
};

class Init_Float64StampedWithVariance_header
{
public:
  Init_Float64StampedWithVariance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64StampedWithVariance_data header(::mvp_msgs::msg::Float64StampedWithVariance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Float64StampedWithVariance_data(msg_);
  }

private:
  ::mvp_msgs::msg::Float64StampedWithVariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mvp_msgs::msg::Float64StampedWithVariance>()
{
  return mvp_msgs::msg::builder::Init_Float64StampedWithVariance_header();
}

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__FLOAT64_STAMPED_WITH_VARIANCE__BUILDER_HPP_
