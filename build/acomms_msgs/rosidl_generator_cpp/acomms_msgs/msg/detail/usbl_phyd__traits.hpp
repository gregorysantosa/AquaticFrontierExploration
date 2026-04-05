// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acomms_msgs:msg/UsblPhyd.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__TRAITS_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acomms_msgs/msg/detail/usbl_phyd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace acomms_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UsblPhyd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_time
  {
    out << "current_time: ";
    rosidl_generator_traits::value_to_yaml(msg.current_time, out);
    out << ", ";
  }

  // member: measurement_time
  {
    out << "measurement_time: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_time, out);
    out << ", ";
  }

  // member: remote_address
  {
    out << "remote_address: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_address, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << ", ";
  }

  // member: delay_1_5
  {
    out << "delay_1_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_1_5, out);
    out << ", ";
  }

  // member: delay_2_5
  {
    out << "delay_2_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_2_5, out);
    out << ", ";
  }

  // member: delay_3_5
  {
    out << "delay_3_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_3_5, out);
    out << ", ";
  }

  // member: delay_4_5
  {
    out << "delay_4_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_4_5, out);
    out << ", ";
  }

  // member: delay_1_2
  {
    out << "delay_1_2: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_1_2, out);
    out << ", ";
  }

  // member: delay_4_1
  {
    out << "delay_4_1: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_4_1, out);
    out << ", ";
  }

  // member: delay_3_2
  {
    out << "delay_3_2: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_3_2, out);
    out << ", ";
  }

  // member: delay_3_4
  {
    out << "delay_3_4: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_3_4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UsblPhyd & msg,
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

  // member: current_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_time: ";
    rosidl_generator_traits::value_to_yaml(msg.current_time, out);
    out << "\n";
  }

  // member: measurement_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_time: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_time, out);
    out << "\n";
  }

  // member: remote_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_address: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_address, out);
    out << "\n";
  }

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << "\n";
  }

  // member: delay_1_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_1_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_1_5, out);
    out << "\n";
  }

  // member: delay_2_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_2_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_2_5, out);
    out << "\n";
  }

  // member: delay_3_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_3_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_3_5, out);
    out << "\n";
  }

  // member: delay_4_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_4_5: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_4_5, out);
    out << "\n";
  }

  // member: delay_1_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_1_2: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_1_2, out);
    out << "\n";
  }

  // member: delay_4_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_4_1: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_4_1, out);
    out << "\n";
  }

  // member: delay_3_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_3_2: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_3_2, out);
    out << "\n";
  }

  // member: delay_3_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_3_4: ";
    rosidl_generator_traits::value_to_yaml(msg.delay_3_4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UsblPhyd & msg, bool use_flow_style = false)
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
  const acomms_msgs::msg::UsblPhyd & msg,
  std::ostream & out, size_t indentation = 0)
{
  acomms_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acomms_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acomms_msgs::msg::UsblPhyd & msg)
{
  return acomms_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acomms_msgs::msg::UsblPhyd>()
{
  return "acomms_msgs::msg::UsblPhyd";
}

template<>
inline const char * name<acomms_msgs::msg::UsblPhyd>()
{
  return "acomms_msgs/msg/UsblPhyd";
}

template<>
struct has_fixed_size<acomms_msgs::msg::UsblPhyd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<acomms_msgs::msg::UsblPhyd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<acomms_msgs::msg::UsblPhyd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__TRAITS_HPP_
