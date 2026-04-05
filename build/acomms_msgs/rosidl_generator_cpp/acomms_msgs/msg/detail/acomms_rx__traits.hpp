// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acomms_msgs:msg/AcommsRx.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX__TRAITS_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acomms_msgs/msg/detail/acomms_rx__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace acomms_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcommsRx & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcommsRx & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcommsRx & msg, bool use_flow_style = false)
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
  const acomms_msgs::msg::AcommsRx & msg,
  std::ostream & out, size_t indentation = 0)
{
  acomms_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acomms_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acomms_msgs::msg::AcommsRx & msg)
{
  return acomms_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acomms_msgs::msg::AcommsRx>()
{
  return "acomms_msgs::msg::AcommsRx";
}

template<>
inline const char * name<acomms_msgs::msg::AcommsRx>()
{
  return "acomms_msgs/msg/AcommsRx";
}

template<>
struct has_fixed_size<acomms_msgs::msg::AcommsRx>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<acomms_msgs::msg::AcommsRx>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<acomms_msgs::msg::AcommsRx>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX__TRAITS_HPP_
