// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__TRAITS_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/srv/detail/get_control_modes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetControlModes_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetControlModes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetControlModes_Request & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetControlModes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetControlModes_Request & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetControlModes_Request>()
{
  return "mvp_msgs::srv::GetControlModes_Request";
}

template<>
inline const char * name<mvp_msgs::srv::GetControlModes_Request>()
{
  return "mvp_msgs/srv/GetControlModes_Request";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetControlModes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetControlModes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mvp_msgs::srv::GetControlModes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'modes'
#include "mvp_msgs/msg/detail/control_mode__traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetControlModes_Response & msg,
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
  const GetControlModes_Response & msg,
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

inline std::string to_yaml(const GetControlModes_Response & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetControlModes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetControlModes_Response & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetControlModes_Response>()
{
  return "mvp_msgs::srv::GetControlModes_Response";
}

template<>
inline const char * name<mvp_msgs::srv::GetControlModes_Response>()
{
  return "mvp_msgs/srv/GetControlModes_Response";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetControlModes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetControlModes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::srv::GetControlModes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mvp_msgs::srv::GetControlModes>()
{
  return "mvp_msgs::srv::GetControlModes";
}

template<>
inline const char * name<mvp_msgs::srv::GetControlModes>()
{
  return "mvp_msgs/srv/GetControlModes";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetControlModes>
  : std::integral_constant<
    bool,
    has_fixed_size<mvp_msgs::srv::GetControlModes_Request>::value &&
    has_fixed_size<mvp_msgs::srv::GetControlModes_Response>::value
  >
{
};

template<>
struct has_bounded_size<mvp_msgs::srv::GetControlModes>
  : std::integral_constant<
    bool,
    has_bounded_size<mvp_msgs::srv::GetControlModes_Request>::value &&
    has_bounded_size<mvp_msgs::srv::GetControlModes_Response>::value
  >
{
};

template<>
struct is_service<mvp_msgs::srv::GetControlModes>
  : std::true_type
{
};

template<>
struct is_service_request<mvp_msgs::srv::GetControlModes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mvp_msgs::srv::GetControlModes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__TRAITS_HPP_
