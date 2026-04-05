// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roslaunch_manager_interfaces:srv/GetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__TRAITS_HPP_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roslaunch_manager_interfaces/srv/detail/get_launch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roslaunch_manager_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLaunch_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLaunch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLaunch_Request & msg, bool use_flow_style = false)
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
  const roslaunch_manager_interfaces::srv::GetLaunch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  roslaunch_manager_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roslaunch_manager_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roslaunch_manager_interfaces::srv::GetLaunch_Request & msg)
{
  return roslaunch_manager_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roslaunch_manager_interfaces::srv::GetLaunch_Request>()
{
  return "roslaunch_manager_interfaces::srv::GetLaunch_Request";
}

template<>
inline const char * name<roslaunch_manager_interfaces::srv::GetLaunch_Request>()
{
  return "roslaunch_manager_interfaces/srv/GetLaunch_Request";
}

template<>
struct has_fixed_size<roslaunch_manager_interfaces::srv::GetLaunch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roslaunch_manager_interfaces::srv::GetLaunch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roslaunch_manager_interfaces::srv::GetLaunch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace roslaunch_manager_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLaunch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: list
  {
    if (msg.list.size() == 0) {
      out << "list: []";
    } else {
      out << "list: [";
      size_t pending_items = msg.list.size();
      for (auto item : msg.list) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetLaunch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list.size() == 0) {
      out << "list: []\n";
    } else {
      out << "list:\n";
      for (auto item : msg.list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLaunch_Response & msg, bool use_flow_style = false)
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
  const roslaunch_manager_interfaces::srv::GetLaunch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  roslaunch_manager_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roslaunch_manager_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roslaunch_manager_interfaces::srv::GetLaunch_Response & msg)
{
  return roslaunch_manager_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roslaunch_manager_interfaces::srv::GetLaunch_Response>()
{
  return "roslaunch_manager_interfaces::srv::GetLaunch_Response";
}

template<>
inline const char * name<roslaunch_manager_interfaces::srv::GetLaunch_Response>()
{
  return "roslaunch_manager_interfaces/srv/GetLaunch_Response";
}

template<>
struct has_fixed_size<roslaunch_manager_interfaces::srv::GetLaunch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roslaunch_manager_interfaces::srv::GetLaunch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roslaunch_manager_interfaces::srv::GetLaunch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roslaunch_manager_interfaces::srv::GetLaunch>()
{
  return "roslaunch_manager_interfaces::srv::GetLaunch";
}

template<>
inline const char * name<roslaunch_manager_interfaces::srv::GetLaunch>()
{
  return "roslaunch_manager_interfaces/srv/GetLaunch";
}

template<>
struct has_fixed_size<roslaunch_manager_interfaces::srv::GetLaunch>
  : std::integral_constant<
    bool,
    has_fixed_size<roslaunch_manager_interfaces::srv::GetLaunch_Request>::value &&
    has_fixed_size<roslaunch_manager_interfaces::srv::GetLaunch_Response>::value
  >
{
};

template<>
struct has_bounded_size<roslaunch_manager_interfaces::srv::GetLaunch>
  : std::integral_constant<
    bool,
    has_bounded_size<roslaunch_manager_interfaces::srv::GetLaunch_Request>::value &&
    has_bounded_size<roslaunch_manager_interfaces::srv::GetLaunch_Response>::value
  >
{
};

template<>
struct is_service<roslaunch_manager_interfaces::srv::GetLaunch>
  : std::true_type
{
};

template<>
struct is_service_request<roslaunch_manager_interfaces::srv::GetLaunch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<roslaunch_manager_interfaces::srv::GetLaunch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__TRAITS_HPP_
