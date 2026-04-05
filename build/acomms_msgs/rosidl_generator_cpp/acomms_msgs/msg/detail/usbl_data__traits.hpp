// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acomms_msgs:msg/UsblData.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__TRAITS_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acomms_msgs/msg/detail/usbl_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'xyz'
// Member 'enu'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace acomms_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UsblData & msg,
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

  // member: xyz
  {
    out << "xyz: ";
    to_flow_style_yaml(msg.xyz, out);
    out << ", ";
  }

  // member: enu
  {
    out << "enu: ";
    to_flow_style_yaml(msg.enu, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: propagation_time
  {
    out << "propagation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.propagation_time, out);
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: integrity
  {
    out << "integrity: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UsblData & msg,
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

  // member: xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xyz:\n";
    to_block_style_yaml(msg.xyz, out, indentation + 2);
  }

  // member: enu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enu:\n";
    to_block_style_yaml(msg.enu, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: propagation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "propagation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.propagation_time, out);
    out << "\n";
  }

  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: integrity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrity: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UsblData & msg, bool use_flow_style = false)
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
  const acomms_msgs::msg::UsblData & msg,
  std::ostream & out, size_t indentation = 0)
{
  acomms_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acomms_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acomms_msgs::msg::UsblData & msg)
{
  return acomms_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acomms_msgs::msg::UsblData>()
{
  return "acomms_msgs::msg::UsblData";
}

template<>
inline const char * name<acomms_msgs::msg::UsblData>()
{
  return "acomms_msgs/msg/UsblData";
}

template<>
struct has_fixed_size<acomms_msgs::msg::UsblData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<acomms_msgs::msg::UsblData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<acomms_msgs::msg::UsblData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__TRAITS_HPP_
