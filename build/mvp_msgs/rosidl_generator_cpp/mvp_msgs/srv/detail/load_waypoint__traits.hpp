// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:srv/LoadWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__TRAITS_HPP_
#define MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/srv/detail/load_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadWaypoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: file
  {
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadWaypoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mvp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mvp_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mvp_msgs::srv::LoadWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::LoadWaypoint_Request & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::LoadWaypoint_Request>()
{
  return "mvp_msgs::srv::LoadWaypoint_Request";
}

template<>
inline const char * name<mvp_msgs::srv::LoadWaypoint_Request>()
{
  return "mvp_msgs/srv/LoadWaypoint_Request";
}

template<>
struct has_fixed_size<mvp_msgs::srv::LoadWaypoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::srv::LoadWaypoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::srv::LoadWaypoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadWaypoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadWaypoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mvp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mvp_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mvp_msgs::srv::LoadWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::LoadWaypoint_Response & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::LoadWaypoint_Response>()
{
  return "mvp_msgs::srv::LoadWaypoint_Response";
}

template<>
inline const char * name<mvp_msgs::srv::LoadWaypoint_Response>()
{
  return "mvp_msgs/srv/LoadWaypoint_Response";
}

template<>
struct has_fixed_size<mvp_msgs::srv::LoadWaypoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mvp_msgs::srv::LoadWaypoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mvp_msgs::srv::LoadWaypoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mvp_msgs::srv::LoadWaypoint>()
{
  return "mvp_msgs::srv::LoadWaypoint";
}

template<>
inline const char * name<mvp_msgs::srv::LoadWaypoint>()
{
  return "mvp_msgs/srv/LoadWaypoint";
}

template<>
struct has_fixed_size<mvp_msgs::srv::LoadWaypoint>
  : std::integral_constant<
    bool,
    has_fixed_size<mvp_msgs::srv::LoadWaypoint_Request>::value &&
    has_fixed_size<mvp_msgs::srv::LoadWaypoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<mvp_msgs::srv::LoadWaypoint>
  : std::integral_constant<
    bool,
    has_bounded_size<mvp_msgs::srv::LoadWaypoint_Request>::value &&
    has_bounded_size<mvp_msgs::srv::LoadWaypoint_Response>::value
  >
{
};

template<>
struct is_service<mvp_msgs::srv::LoadWaypoint>
  : std::true_type
{
};

template<>
struct is_service_request<mvp_msgs::srv::LoadWaypoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mvp_msgs::srv::LoadWaypoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__TRAITS_HPP_
