// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/SetpointBehavior.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/setpoint_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetpointBehavior & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: child_frame_id
  {
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: behavior
  {
    if (msg.behavior.size() == 0) {
      out << "behavior: []";
    } else {
      out << "behavior: [";
      size_t pending_items = msg.behavior.size();
      for (auto item : msg.behavior) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SetpointBehavior & msg,
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

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.behavior.size() == 0) {
      out << "behavior: []\n";
    } else {
      out << "behavior:\n";
      for (auto item : msg.behavior) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetpointBehavior & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::SetpointBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::SetpointBehavior & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::SetpointBehavior>()
{
  return "mvp_msgs::msg::SetpointBehavior";
}

template<>
inline const char * name<mvp_msgs::msg::SetpointBehavior>()
{
  return "mvp_msgs/msg/SetpointBehavior";
}

template<>
struct has_fixed_size<mvp_msgs::msg::SetpointBehavior>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::msg::SetpointBehavior>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::msg::SetpointBehavior>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__TRAITS_HPP_
