// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roslaunch_manager_interfaces:srv/SetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__TRAITS_HPP_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roslaunch_manager_interfaces/srv/detail/set_launch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roslaunch_manager_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLaunch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pkg
  {
    out << "pkg: ";
    rosidl_generator_traits::value_to_yaml(msg.pkg, out);
    out << ", ";
  }

  // member: file
  {
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
    out << ", ";
  }

  // member: set
  {
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLaunch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pkg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pkg: ";
    rosidl_generator_traits::value_to_yaml(msg.pkg, out);
    out << "\n";
  }

  // member: file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
    out << "\n";
  }

  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLaunch_Request & msg, bool use_flow_style = false)
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

}  // namespace roslaunch_manager_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use roslaunch_manager_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roslaunch_manager_interfaces::srv::SetLaunch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  roslaunch_manager_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roslaunch_manager_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roslaunch_manager_interfaces::srv::SetLaunch_Request & msg)
{
  return roslaunch_manager_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roslaunch_manager_interfaces::srv::SetLaunch_Request>()
{
  return "roslaunch_manager_interfaces::srv::SetLaunch_Request";
}

template<>
inline const char * name<roslaunch_manager_interfaces::srv::SetLaunch_Request>()
{
  return "roslaunch_manager_interfaces/srv/SetLaunch_Request";
}

template<>
struct has_fixed_size<roslaunch_manager_interfaces::srv::SetLaunch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roslaunch_manager_interfaces::srv::SetLaunch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roslaunch_manager_interfaces::srv::SetLaunch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace roslaunch_manager_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLaunch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLaunch_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLaunch_Response & msg, bool use_flow_style = false)
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

}  // namespace roslaunch_manager_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use roslaunch_manager_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roslaunch_manager_interfaces::srv::SetLaunch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  roslaunch_manager_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roslaunch_manager_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roslaunch_manager_interfaces::srv::SetLaunch_Response & msg)
{
  return roslaunch_manager_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roslaunch_manager_interfaces::srv::SetLaunch_Response>()
{
  return "roslaunch_manager_interfaces::srv::SetLaunch_Response";
}

template<>
inline const char * name<roslaunch_manager_interfaces::srv::SetLaunch_Response>()
{
  return "roslaunch_manager_interfaces/srv/SetLaunch_Response";
}

template<>
struct has_fixed_size<roslaunch_manager_interfaces::srv::SetLaunch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roslaunch_manager_interfaces::srv::SetLaunch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roslaunch_manager_interfaces::srv::SetLaunch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roslaunch_manager_interfaces::srv::SetLaunch>()
{
  return "roslaunch_manager_interfaces::srv::SetLaunch";
}

template<>
inline const char * name<roslaunch_manager_interfaces::srv::SetLaunch>()
{
  return "roslaunch_manager_interfaces/srv/SetLaunch";
}

template<>
struct has_fixed_size<roslaunch_manager_interfaces::srv::SetLaunch>
  : std::integral_constant<
    bool,
    has_fixed_size<roslaunch_manager_interfaces::srv::SetLaunch_Request>::value &&
    has_fixed_size<roslaunch_manager_interfaces::srv::SetLaunch_Response>::value
  >
{
};

template<>
struct has_bounded_size<roslaunch_manager_interfaces::srv::SetLaunch>
  : std::integral_constant<
    bool,
    has_bounded_size<roslaunch_manager_interfaces::srv::SetLaunch_Request>::value &&
    has_bounded_size<roslaunch_manager_interfaces::srv::SetLaunch_Response>::value
  >
{
};

template<>
struct is_service<roslaunch_manager_interfaces::srv::SetLaunch>
  : std::true_type
{
};

template<>
struct is_service_request<roslaunch_manager_interfaces::srv::SetLaunch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<roslaunch_manager_interfaces::srv::SetLaunch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__TRAITS_HPP_
