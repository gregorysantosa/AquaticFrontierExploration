// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mvp_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pid_x'
// Member 'pid_y'
// Member 'pid_z'
// Member 'pid_roll'
// Member 'pid_pitch'
// Member 'pid_yaw'
// Member 'pid_u'
// Member 'pid_v'
// Member 'pid_w'
// Member 'pid_p'
// Member 'pid_q'
// Member 'pid_r'
#include "mvp_msgs/msg/detail/pid_gains__traits.hpp"

namespace mvp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: dofs
  {
    if (msg.dofs.size() == 0) {
      out << "dofs: []";
    } else {
      out << "dofs: [";
      size_t pending_items = msg.dofs.size();
      for (auto item : msg.dofs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_x
  {
    out << "pid_x: ";
    to_flow_style_yaml(msg.pid_x, out);
    out << ", ";
  }

  // member: pid_y
  {
    out << "pid_y: ";
    to_flow_style_yaml(msg.pid_y, out);
    out << ", ";
  }

  // member: pid_z
  {
    out << "pid_z: ";
    to_flow_style_yaml(msg.pid_z, out);
    out << ", ";
  }

  // member: pid_roll
  {
    out << "pid_roll: ";
    to_flow_style_yaml(msg.pid_roll, out);
    out << ", ";
  }

  // member: pid_pitch
  {
    out << "pid_pitch: ";
    to_flow_style_yaml(msg.pid_pitch, out);
    out << ", ";
  }

  // member: pid_yaw
  {
    out << "pid_yaw: ";
    to_flow_style_yaml(msg.pid_yaw, out);
    out << ", ";
  }

  // member: pid_u
  {
    out << "pid_u: ";
    to_flow_style_yaml(msg.pid_u, out);
    out << ", ";
  }

  // member: pid_v
  {
    out << "pid_v: ";
    to_flow_style_yaml(msg.pid_v, out);
    out << ", ";
  }

  // member: pid_w
  {
    out << "pid_w: ";
    to_flow_style_yaml(msg.pid_w, out);
    out << ", ";
  }

  // member: pid_p
  {
    out << "pid_p: ";
    to_flow_style_yaml(msg.pid_p, out);
    out << ", ";
  }

  // member: pid_q
  {
    out << "pid_q: ";
    to_flow_style_yaml(msg.pid_q, out);
    out << ", ";
  }

  // member: pid_r
  {
    out << "pid_r: ";
    to_flow_style_yaml(msg.pid_r, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlMode & msg,
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

  // member: dofs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dofs.size() == 0) {
      out << "dofs: []\n";
    } else {
      out << "dofs:\n";
      for (auto item : msg.dofs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_x:\n";
    to_block_style_yaml(msg.pid_x, out, indentation + 2);
  }

  // member: pid_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_y:\n";
    to_block_style_yaml(msg.pid_y, out, indentation + 2);
  }

  // member: pid_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_z:\n";
    to_block_style_yaml(msg.pid_z, out, indentation + 2);
  }

  // member: pid_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_roll:\n";
    to_block_style_yaml(msg.pid_roll, out, indentation + 2);
  }

  // member: pid_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_pitch:\n";
    to_block_style_yaml(msg.pid_pitch, out, indentation + 2);
  }

  // member: pid_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_yaw:\n";
    to_block_style_yaml(msg.pid_yaw, out, indentation + 2);
  }

  // member: pid_u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_u:\n";
    to_block_style_yaml(msg.pid_u, out, indentation + 2);
  }

  // member: pid_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_v:\n";
    to_block_style_yaml(msg.pid_v, out, indentation + 2);
  }

  // member: pid_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_w:\n";
    to_block_style_yaml(msg.pid_w, out, indentation + 2);
  }

  // member: pid_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_p:\n";
    to_block_style_yaml(msg.pid_p, out, indentation + 2);
  }

  // member: pid_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_q:\n";
    to_block_style_yaml(msg.pid_q, out, indentation + 2);
  }

  // member: pid_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_r:\n";
    to_block_style_yaml(msg.pid_r, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlMode & msg, bool use_flow_style = false)
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

}  // namespace mvp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mvp_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mvp_msgs::msg::ControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  mvp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mvp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mvp_msgs::msg::ControlMode & msg)
{
  return mvp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mvp_msgs::msg::ControlMode>()
{
  return "mvp_msgs::msg::ControlMode";
}

template<>
inline const char * name<mvp_msgs::msg::ControlMode>()
{
  return "mvp_msgs/msg/ControlMode";
}

template<>
struct has_fixed_size<mvp_msgs::msg::ControlMode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mvp_msgs::msg::ControlMode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mvp_msgs::msg::ControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_
