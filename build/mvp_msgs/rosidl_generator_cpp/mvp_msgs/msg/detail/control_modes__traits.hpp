// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/ControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODES__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/control_modes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'modes'
#include "mvp_msgs/msg/detail/control_mode__traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlModes & msg,
  std::ostream & out)
{
  out << "{";
  // member: modes
  {
    if (msg.modes.size() == 0) {
      out << "modes: []";
    } else {
      out << "modes: [";
      size_t pending_items = msg.modes.size();
      for (auto item : msg.modes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlModes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: modes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.modes.size() == 0) {
      out << "modes: []\n";
    } else {
      out << "modes:\n";
      for (auto item : msg.modes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlModes & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::ControlModes & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::ControlModes & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::ControlModes>()
{
  return "mvp_msgs::msg::ControlModes";
}

template<>
inline const char * name<mvp_msgs::msg::ControlModes>()
{
  return "mvp_msgs/msg/ControlModes";
}

template<>
struct has_fixed_size<mvp_msgs::msg::ControlModes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::msg::ControlModes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::msg::ControlModes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODES__TRAITS_HPP_
