// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/SetpointBehavior.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__SetpointBehavior __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__SetpointBehavior __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetpointBehavior_
{
  using Type = SetpointBehavior_<ContainerAllocator>;

  explicit SetpointBehavior_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      this->control_mode = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 12>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->behavior.begin(), this->behavior.end(), "");
    }
  }

  explicit SetpointBehavior_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    child_frame_id(_alloc),
    control_mode(_alloc),
    behavior(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      this->control_mode = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 12>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->behavior.begin(), this->behavior.end(), "");
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _control_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_mode_type control_mode;
  using _behavior_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 12>;
  _behavior_type behavior;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__control_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__behavior(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 12> & _arg)
  {
    this->behavior = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::msg::SetpointBehavior_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::SetpointBehavior_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::SetpointBehavior_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::SetpointBehavior_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__SetpointBehavior
    std::shared_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__SetpointBehavior
    std::shared_ptr<mvp_msgs::msg::SetpointBehavior_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetpointBehavior_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetpointBehavior_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetpointBehavior_

// alias to use template instance with default allocator
using SetpointBehavior =
  mvp_msgs::msg::SetpointBehavior_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__STRUCT_HPP_
