// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'count'
#include "std_msgs/msg/detail/int16__traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    to_flow_style_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count:\n";
    to_block_style_yaml(msg.count, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Request & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetWaypoints_Request & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetWaypoints_Request>()
{
  return "mvp_msgs::srv::GetWaypoints_Request";
}

template<>
inline const char * name<mvp_msgs::srv::GetWaypoints_Request>()
{
  return "mvp_msgs/srv/GetWaypoints_Request";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetWaypoints_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int16>::value> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetWaypoints_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int16>::value> {};

template<>
struct is_message<mvp_msgs::srv::GetWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'wpt'
#include "mvp_msgs/msg/detail/waypoint__traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: wpt
  {
    if (msg.wpt.size() == 0) {
      out << "wpt: []";
    } else {
      out << "wpt: [";
      size_t pending_items = msg.wpt.size();
      for (auto item : msg.wpt) {
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
  const GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wpt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wpt.size() == 0) {
      out << "wpt: []\n";
    } else {
      out << "wpt:\n";
      for (auto item : msg.wpt) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Response & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetWaypoints_Response & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetWaypoints_Response>()
{
  return "mvp_msgs::srv::GetWaypoints_Response";
}

template<>
inline const char * name<mvp_msgs::srv::GetWaypoints_Response>()
{
  return "mvp_msgs/srv/GetWaypoints_Response";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::srv::GetWaypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mvp_msgs::srv::GetWaypoints>()
{
  return "mvp_msgs::srv::GetWaypoints";
}

template<>
inline const char * name<mvp_msgs::srv::GetWaypoints>()
{
  return "mvp_msgs/srv/GetWaypoints";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<mvp_msgs::srv::GetWaypoints_Request>::value &&
    has_fixed_size<mvp_msgs::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<mvp_msgs::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<mvp_msgs::srv::GetWaypoints_Request>::value &&
    has_bounded_size<mvp_msgs::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct is_service<mvp_msgs::srv::GetWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<mvp_msgs::srv::GetWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mvp_msgs::srv::GetWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
