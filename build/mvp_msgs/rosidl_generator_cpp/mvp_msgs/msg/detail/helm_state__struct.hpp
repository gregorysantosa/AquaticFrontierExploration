// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/HelmState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATE__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__HELM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__HelmState __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__HelmState __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HelmState_
{
  using Type = HelmState_<ContainerAllocator>;

  explicit HelmState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mode = "";
      this->max_duration = 0.0;
      this->exit_state = "";
    }
  }

  explicit HelmState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    mode(_alloc),
    exit_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mode = "";
      this->max_duration = 0.0;
      this->exit_state = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _transitions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _transitions_type transitions;
  using _max_duration_type =
    double;
  _max_duration_type max_duration;
  using _exit_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _exit_state_type exit_state;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__transitions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->transitions = _arg;
    return *this;
  }
  Type & set__max_duration(
    const double & _arg)
  {
    this->max_duration = _arg;
    return *this;
  }
  Type & set__exit_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->exit_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::msg::HelmState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::HelmState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::HelmState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::HelmState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__HelmState
    std::shared_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__HelmState
    std::shared_ptr<mvp_msgs::msg::HelmState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HelmState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->transitions != other.transitions) {
      return false;
    }
    if (this->max_duration != other.max_duration) {
      return false;
    }
    if (this->exit_state != other.exit_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HelmState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HelmState_

// alias to use template instance with default allocator
using HelmState =
  mvp_msgs::msg::HelmState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATE__STRUCT_HPP_
