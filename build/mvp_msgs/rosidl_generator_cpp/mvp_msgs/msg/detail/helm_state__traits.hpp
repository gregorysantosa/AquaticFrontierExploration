// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/HelmState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATE__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__HELM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/helm_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HelmState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: transitions
  {
    if (msg.transitions.size() == 0) {
      out << "transitions: []";
    } else {
      out << "transitions: [";
      size_t pending_items = msg.transitions.size();
      for (auto item : msg.transitions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_duration
  {
    out << "max_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration, out);
    out << ", ";
  }

  // member: exit_state
  {
    out << "exit_state: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HelmState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: transitions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transitions.size() == 0) {
      out << "transitions: []\n";
    } else {
      out << "transitions:\n";
      for (auto item : msg.transitions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_duration, out);
    out << "\n";
  }

  // member: exit_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_state: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HelmState & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::HelmState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::HelmState & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::HelmState>()
{
  return "mvp_msgs::msg::HelmState";
}

template<>
inline const char * name<mvp_msgs::msg::HelmState>()
{
  return "mvp_msgs/msg/HelmState";
}

template<>
struct has_fixed_size<mvp_msgs::msg::HelmState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::msg::HelmState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::msg::HelmState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATE__TRAITS_HPP_
