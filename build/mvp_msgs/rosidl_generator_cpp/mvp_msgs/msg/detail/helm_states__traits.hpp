// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/HelmStates.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATES__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__HELM_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/helm_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'states'
#include "mvp_msgs/msg/detail/helm_state__traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HelmStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
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
  const HelmStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HelmStates & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::HelmStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::HelmStates & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::HelmStates>()
{
  return "mvp_msgs::msg::HelmStates";
}

template<>
inline const char * name<mvp_msgs::msg::HelmStates>()
{
  return "mvp_msgs/msg/HelmStates";
}

template<>
struct has_fixed_size<mvp_msgs::msg::HelmStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::msg::HelmStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::msg::HelmStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATES__TRAITS_HPP_
