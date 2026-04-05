// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATE__TRAITS_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/srv/detail/get_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetState_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetState_Request & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetState_Request & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetState_Request>()
{
  return "mvp_msgs::srv::GetState_Request";
}

template<>
inline const char * name<mvp_msgs::srv::GetState_Request>()
{
  return "mvp_msgs/srv/GetState_Request";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::srv::GetState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "mvp_msgs/msg/detail/helm_state__traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetState_Response & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetState_Response & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetState_Response>()
{
  return "mvp_msgs::srv::GetState_Response";
}

template<>
inline const char * name<mvp_msgs::srv::GetState_Response>()
{
  return "mvp_msgs/srv/GetState_Response";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetState_Response>
  : std::integral_constant<bool, has_fixed_size<mvp_msgs::msg::HelmState>::value> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetState_Response>
  : std::integral_constant<bool, has_bounded_size<mvp_msgs::msg::HelmState>::value> {};

template<>
struct is_message<mvp_msgs::srv::GetState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mvp_msgs::srv::GetState>()
{
  return "mvp_msgs::srv::GetState";
}

template<>
inline const char * name<mvp_msgs::srv::GetState>()
{
  return "mvp_msgs/srv/GetState";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetState>
  : std::integral_constant<
    bool,
    has_fixed_size<mvp_msgs::srv::GetState_Request>::value &&
    has_fixed_size<mvp_msgs::srv::GetState_Response>::value
  >
{
};

template<>
struct has_bounded_size<mvp_msgs::srv::GetState>
  : std::integral_constant<
    bool,
    has_bounded_size<mvp_msgs::srv::GetState_Request>::value &&
    has_bounded_size<mvp_msgs::srv::GetState_Response>::value
  >
{
};

template<>
struct is_service<mvp_msgs::srv::GetState>
  : std::true_type
{
};

template<>
struct is_service_request<mvp_msgs::srv::GetState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mvp_msgs::srv::GetState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATE__TRAITS_HPP_
