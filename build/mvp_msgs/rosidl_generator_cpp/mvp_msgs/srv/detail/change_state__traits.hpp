// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__CHANGE_STATE__TRAITS_HPP_
#define MVP_MSGS__SRV__DETAIL__CHANGE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/srv/detail/change_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: caller
  {
    out << "caller: ";
    rosidl_generator_traits::value_to_yaml(msg.caller, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: caller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "caller: ";
    rosidl_generator_traits::value_to_yaml(msg.caller, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeState_Request & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::ChangeState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::ChangeState_Request & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::ChangeState_Request>()
{
  return "mvp_msgs::srv::ChangeState_Request";
}

template<>
inline const char * name<mvp_msgs::srv::ChangeState_Request>()
{
  return "mvp_msgs/srv/ChangeState_Request";
}

template<>
struct has_fixed_size<mvp_msgs::srv::ChangeState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::srv::ChangeState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::srv::ChangeState_Request>
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
  const ChangeState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeState_Response & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::ChangeState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::ChangeState_Response & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::ChangeState_Response>()
{
  return "mvp_msgs::srv::ChangeState_Response";
}

template<>
inline const char * name<mvp_msgs::srv::ChangeState_Response>()
{
  return "mvp_msgs/srv/ChangeState_Response";
}

template<>
struct has_fixed_size<mvp_msgs::srv::ChangeState_Response>
  : std::integral_constant<bool, has_fixed_size<mvp_msgs::msg::HelmState>::value> {};

template<>
struct has_bounded_size<mvp_msgs::srv::ChangeState_Response>
  : std::integral_constant<bool, has_bounded_size<mvp_msgs::msg::HelmState>::value> {};

template<>
struct is_message<mvp_msgs::srv::ChangeState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mvp_msgs::srv::ChangeState>()
{
  return "mvp_msgs::srv::ChangeState";
}

template<>
inline const char * name<mvp_msgs::srv::ChangeState>()
{
  return "mvp_msgs/srv/ChangeState";
}

template<>
struct has_fixed_size<mvp_msgs::srv::ChangeState>
  : std::integral_constant<
    bool,
    has_fixed_size<mvp_msgs::srv::ChangeState_Request>::value &&
    has_fixed_size<mvp_msgs::srv::ChangeState_Response>::value
  >
{
};

template<>
struct has_bounded_size<mvp_msgs::srv::ChangeState>
  : std::integral_constant<
    bool,
    has_bounded_size<mvp_msgs::srv::ChangeState_Request>::value &&
    has_bounded_size<mvp_msgs::srv::ChangeState_Response>::value
  >
{
};

template<>
struct is_service<mvp_msgs::srv::ChangeState>
  : std::true_type
{
};

template<>
struct is_service_request<mvp_msgs::srv::ChangeState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mvp_msgs::srv::ChangeState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__SRV__DETAIL__CHANGE_STATE__TRAITS_HPP_
