// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__POWER__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Power & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Power & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Power & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::Power & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::Power & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::Power>()
{
  return "mvp_msgs::msg::Power";
}

template<>
inline const char * name<mvp_msgs::msg::Power>()
{
  return "mvp_msgs/msg/Power";
}

template<>
struct has_fixed_size<mvp_msgs::msg::Power>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mvp_msgs::msg::Power>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mvp_msgs::msg::Power>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__POWER__TRAITS_HPP_
