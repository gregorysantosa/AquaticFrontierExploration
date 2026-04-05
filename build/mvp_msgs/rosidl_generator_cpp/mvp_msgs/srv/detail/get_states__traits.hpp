// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:srv/GetStates.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATES__TRAITS_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/srv/detail/get_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStates_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStates_Request & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetStates_Request & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetStates_Request>()
{
  return "mvp_msgs::srv::GetStates_Request";
}

template<>
inline const char * name<mvp_msgs::srv::GetStates_Request>()
{
  return "mvp_msgs/srv/GetStates_Request";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetStates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetStates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mvp_msgs::srv::GetStates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'states'
#include "mvp_msgs/msg/detail/helm_state__traits.hpp"

namespace mvp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
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
  const GetStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStates_Response & msg, bool use_flow_style = false)
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
  const mvp_msgs::srv::GetStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::srv::GetStates_Response & msg)
{
  return mvp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::srv::GetStates_Response>()
{
  return "mvp_msgs::srv::GetStates_Response";
}

template<>
inline const char * name<mvp_msgs::srv::GetStates_Response>()
{
  return "mvp_msgs/srv/GetStates_Response";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::srv::GetStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::srv::GetStates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mvp_msgs::srv::GetStates>()
{
  return "mvp_msgs::srv::GetStates";
}

template<>
inline const char * name<mvp_msgs::srv::GetStates>()
{
  return "mvp_msgs/srv/GetStates";
}

template<>
struct has_fixed_size<mvp_msgs::srv::GetStates>
  : std::integral_constant<
    bool,
    has_fixed_size<mvp_msgs::srv::GetStates_Request>::value &&
    has_fixed_size<mvp_msgs::srv::GetStates_Response>::value
  >
{
};

template<>
struct has_bounded_size<mvp_msgs::srv::GetStates>
  : std::integral_constant<
    bool,
    has_bounded_size<mvp_msgs::srv::GetStates_Request>::value &&
    has_bounded_size<mvp_msgs::srv::GetStates_Response>::value
  >
{
};

template<>
struct is_service<mvp_msgs::srv::GetStates>
  : std::true_type
{
};

template<>
struct is_service_request<mvp_msgs::srv::GetStates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mvp_msgs::srv::GetStates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATES__TRAITS_HPP_
