// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'wpt'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'll_wpt'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: wpt
  {
    out << "wpt: ";
    to_flow_style_yaml(msg.wpt, out);
    out << ", ";
  }

  // member: ll_wpt
  {
    out << "ll_wpt: ";
    to_flow_style_yaml(msg.ll_wpt, out);
    out << ", ";
  }

  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
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

  // member: wpt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wpt:\n";
    to_block_style_yaml(msg.wpt, out, indentation + 2);
  }

  // member: ll_wpt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ll_wpt:\n";
    to_block_style_yaml(msg.ll_wpt, out, indentation + 2);
  }

  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const mvp_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::Waypoint & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::Waypoint>()
{
  return "mvp_msgs::msg::Waypoint";
}

template<>
inline const char * name<mvp_msgs::msg::Waypoint>()
{
  return "mvp_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<mvp_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPoint>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mvp_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPoint>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mvp_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
