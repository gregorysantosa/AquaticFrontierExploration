// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/ControlProcess.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_PROCESS__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_PROCESS__STRUCT_HPP_

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
// Member 'position'
// Member 'orientation'
// Member 'velocity'
// Member 'angular_rate'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__ControlProcess __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__ControlProcess __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlProcess_
{
  using Type = ControlProcess_<ContainerAllocator>;

  explicit ControlProcess_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    orientation(_init),
    velocity(_init),
    angular_rate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_mode = "";
      this->child_frame_id = "";
    }
  }

  explicit ControlProcess_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    control_mode(_alloc),
    position(_alloc, _init),
    orientation(_alloc, _init),
    child_frame_id(_alloc),
    velocity(_alloc, _init),
    angular_rate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_mode = "";
      this->child_frame_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _control_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_mode_type control_mode;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_type orientation;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _angular_rate_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_rate_type angular_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__control_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__angular_rate(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::msg::ControlProcess_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::ControlProcess_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::ControlProcess_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::ControlProcess_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__ControlProcess
    std::shared_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__ControlProcess
    std::shared_ptr<mvp_msgs::msg::ControlProcess_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlProcess_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->angular_rate != other.angular_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlProcess_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlProcess_

// alias to use template instance with default allocator
using ControlProcess =
  mvp_msgs::msg::ControlProcess_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_PROCESS__STRUCT_HPP_
