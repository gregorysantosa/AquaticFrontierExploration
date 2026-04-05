// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/ControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODES__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'modes'
#include "mvp_msgs/msg/detail/control_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__ControlModes __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__ControlModes __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlModes_
{
  using Type = ControlModes_<ContainerAllocator>;

  explicit ControlModes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ControlModes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _modes_type =
    std::vector<mvp_msgs::msg::ControlMode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mvp_msgs::msg::ControlMode_<ContainerAllocator>>>;
  _modes_type modes;

  // setters for named parameter idiom
  Type & set__modes(
    const std::vector<mvp_msgs::msg::ControlMode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mvp_msgs::msg::ControlMode_<ContainerAllocator>>> & _arg)
  {
    this->modes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::msg::ControlModes_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::ControlModes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::ControlModes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::ControlModes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__ControlModes
    std::shared_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__ControlModes
    std::shared_ptr<mvp_msgs::msg::ControlModes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlModes_ & other) const
  {
    if (this->modes != other.modes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlModes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlModes_

// alias to use template instance with default allocator
using ControlModes =
  mvp_msgs::msg::ControlModes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODES__STRUCT_HPP_
