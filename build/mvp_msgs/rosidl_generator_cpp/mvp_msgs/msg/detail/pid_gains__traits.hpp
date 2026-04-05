// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/PidGains.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__PID_GAINS__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__PID_GAINS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/pid_gains__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PidGains & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: kv
  {
    out << "kv: ";
    rosidl_generator_traits::value_to_yaml(msg.kv, out);
    out << ", ";
  }

  // member: pid_max
  {
    out << "pid_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_max, out);
    out << ", ";
  }

  // member: pid_min
  {
    out << "pid_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_min, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PidGains & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: kv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kv: ";
    rosidl_generator_traits::value_to_yaml(msg.kv, out);
    out << "\n";
  }

  // member: pid_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_max, out);
    out << "\n";
  }

  // member: pid_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_min, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PidGains & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::PidGains & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::PidGains & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::PidGains>()
{
  return "mvp_msgs::msg::PidGains";
}

template<>
inline const char * name<mvp_msgs::msg::PidGains>()
{
  return "mvp_msgs/msg/PidGains";
}

template<>
struct has_fixed_size<mvp_msgs::msg::PidGains>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mvp_msgs::msg::PidGains>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mvp_msgs::msg::PidGains>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__PID_GAINS__TRAITS_HPP_
