// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/PwmSignal.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/pwm_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PwmSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: signal
  {
    out << "signal: ";
    rosidl_generator_traits::value_to_yaml(msg.signal, out);
    out << ", ";
  }

  // member: channel
  {
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PwmSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal: ";
    rosidl_generator_traits::value_to_yaml(msg.signal, out);
    out << "\n";
  }

  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PwmSignal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mvp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mvp_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mvp_msgs::msg::PwmSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::PwmSignal & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::PwmSignal>()
{
  return "mvp_msgs::msg::PwmSignal";
}

template<>
inline const char * name<mvp_msgs::msg::PwmSignal>()
{
  return "mvp_msgs/msg/PwmSignal";
}

template<>
struct has_fixed_size<mvp_msgs::msg::PwmSignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mvp_msgs::msg::PwmSignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mvp_msgs::msg::PwmSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__TRAITS_HPP_
