// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__TRAITS_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acomms_msgs/msg/detail/usbl_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace acomms_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UsblAngles & msg,
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

  // member: local_bearing
  {
    out << "local_bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bearing, out);
    out << ", ";
  }

  // member: local_elevation
  {
    out << "local_elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.local_elevation, out);
    out << ", ";
  }

  // member: bearing
  {
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: signal_integrity
  {
    out << "signal_integrity: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_integrity, out);
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
  const UsblAngles & msg,
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

  // member: local_bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bearing, out);
    out << "\n";
  }

  // member: local_elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.local_elevation, out);
    out << "\n";
  }

  // member: bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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

  // member: signal_integrity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_integrity: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_integrity, out);
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

inline std::string to_yaml(const UsblAngles & msg, bool use_flow_style = false)
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
  const acomms_msgs::msg::UsblAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  acomms_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acomms_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const acomms_msgs::msg::UsblAngles & msg)
{
  return acomms_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<acomms_msgs::msg::UsblAngles>()
{
  return "acomms_msgs::msg::UsblAngles";
}

template<>
inline const char * name<acomms_msgs::msg::UsblAngles>()
{
  return "acomms_msgs/msg/UsblAngles";
}

template<>
struct has_fixed_size<acomms_msgs::msg::UsblAngles>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<acomms_msgs::msg::UsblAngles>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<acomms_msgs::msg::UsblAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__TRAITS_HPP_
