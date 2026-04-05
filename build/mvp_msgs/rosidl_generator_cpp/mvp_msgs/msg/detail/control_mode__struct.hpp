// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


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
#include "mvp_msgs/msg/detail/pid_gains__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__ControlMode __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__ControlMode __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlMode_
{
  using Type = ControlMode_<ContainerAllocator>;

  explicit ControlMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pid_x(_init),
    pid_y(_init),
    pid_z(_init),
    pid_roll(_init),
    pid_pitch(_init),
    pid_yaw(_init),
    pid_u(_init),
    pid_v(_init),
    pid_w(_init),
    pid_p(_init),
    pid_q(_init),
    pid_r(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit ControlMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    pid_x(_alloc, _init),
    pid_y(_alloc, _init),
    pid_z(_alloc, _init),
    pid_roll(_alloc, _init),
    pid_pitch(_alloc, _init),
    pid_yaw(_alloc, _init),
    pid_u(_alloc, _init),
    pid_v(_alloc, _init),
    pid_w(_alloc, _init),
    pid_p(_alloc, _init),
    pid_q(_alloc, _init),
    pid_r(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _dofs_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _dofs_type dofs;
  using _pid_x_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_x_type pid_x;
  using _pid_y_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_y_type pid_y;
  using _pid_z_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_z_type pid_z;
  using _pid_roll_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_roll_type pid_roll;
  using _pid_pitch_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_pitch_type pid_pitch;
  using _pid_yaw_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_yaw_type pid_yaw;
  using _pid_u_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_u_type pid_u;
  using _pid_v_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_v_type pid_v;
  using _pid_w_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_w_type pid_w;
  using _pid_p_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_p_type pid_p;
  using _pid_q_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_q_type pid_q;
  using _pid_r_type =
    mvp_msgs::msg::PidGains_<ContainerAllocator>;
  _pid_r_type pid_r;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__dofs(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->dofs = _arg;
    return *this;
  }
  Type & set__pid_x(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_x = _arg;
    return *this;
  }
  Type & set__pid_y(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_y = _arg;
    return *this;
  }
  Type & set__pid_z(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_z = _arg;
    return *this;
  }
  Type & set__pid_roll(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_roll = _arg;
    return *this;
  }
  Type & set__pid_pitch(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_pitch = _arg;
    return *this;
  }
  Type & set__pid_yaw(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_yaw = _arg;
    return *this;
  }
  Type & set__pid_u(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_u = _arg;
    return *this;
  }
  Type & set__pid_v(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_v = _arg;
    return *this;
  }
  Type & set__pid_w(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_w = _arg;
    return *this;
  }
  Type & set__pid_p(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_p = _arg;
    return *this;
  }
  Type & set__pid_q(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_q = _arg;
    return *this;
  }
  Type & set__pid_r(
    const mvp_msgs::msg::PidGains_<ContainerAllocator> & _arg)
  {
    this->pid_r = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DOF_X =
    0;
  static constexpr int32_t DOF_Y =
    1;
  static constexpr int32_t DOF_Z =
    2;
  static constexpr int32_t DOF_ROLL =
    3;
  static constexpr int32_t DOF_PITCH =
    4;
  static constexpr int32_t DOF_YAW =
    5;
  static constexpr int32_t DOF_U =
    6;
  static constexpr int32_t DOF_V =
    7;
  static constexpr int32_t DOF_W =
    8;
  static constexpr int32_t DOF_P =
    9;
  static constexpr int32_t DOF_Q =
    10;
  static constexpr int32_t DOF_R =
    11;

  // pointer types
  using RawPtr =
    mvp_msgs::msg::ControlMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::ControlMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::ControlMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::ControlMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__ControlMode
    std::shared_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__ControlMode
    std::shared_ptr<mvp_msgs::msg::ControlMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMode_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->dofs != other.dofs) {
      return false;
    }
    if (this->pid_x != other.pid_x) {
      return false;
    }
    if (this->pid_y != other.pid_y) {
      return false;
    }
    if (this->pid_z != other.pid_z) {
      return false;
    }
    if (this->pid_roll != other.pid_roll) {
      return false;
    }
    if (this->pid_pitch != other.pid_pitch) {
      return false;
    }
    if (this->pid_yaw != other.pid_yaw) {
      return false;
    }
    if (this->pid_u != other.pid_u) {
      return false;
    }
    if (this->pid_v != other.pid_v) {
      return false;
    }
    if (this->pid_w != other.pid_w) {
      return false;
    }
    if (this->pid_p != other.pid_p) {
      return false;
    }
    if (this->pid_q != other.pid_q) {
      return false;
    }
    if (this->pid_r != other.pid_r) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMode_

// alias to use template instance with default allocator
using ControlMode =
  mvp_msgs::msg::ControlMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_Z;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_ROLL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_PITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_YAW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_U;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_W;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_P;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_Q;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMode_<ContainerAllocator>::DOF_R;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_
