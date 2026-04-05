// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acomms_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__BOOL_STAMPED__TRAITS_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__BOOL_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acomms_msgs/msg/detail/bool_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace acomms_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoolStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoolStamped & msg,
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

  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoolStamped & msg, bool use_flow_style = false)
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

}  // namespace acomms_msgs

namespace rosidl_generator_traits
{

[[deprecated("use acomms_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const acomms_msgs::msg::BoolStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  acomms_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acomms_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acomms_msgs::msg::BoolStamped & msg)
{
  return acomms_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acomms_msgs::msg::BoolStamped>()
{
  return "acomms_msgs::msg::BoolStamped";
}

template<>
inline const char * name<acomms_msgs::msg::BoolStamped>()
{
  return "acomms_msgs/msg/BoolStamped";
}

template<>
struct has_fixed_size<acomms_msgs::msg::BoolStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<acomms_msgs::msg::BoolStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<acomms_msgs::msg::BoolStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACOMMS_MSGS__MSG__DETAIL__BOOL_STAMPED__TRAITS_HPP_
