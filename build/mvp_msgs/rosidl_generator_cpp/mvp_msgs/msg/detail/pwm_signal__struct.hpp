// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/PwmSignal.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__PwmSignal __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__PwmSignal __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PwmSignal_
{
  using Type = PwmSignal_<ContainerAllocator>;

  explicit PwmSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = 0.0f;
      this->channel = 0;
    }
  }

  explicit PwmSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = 0.0f;
      this->channel = 0;
    }
  }

  // field types and members
  using _signal_type =
    float;
  _signal_type signal;
  using _channel_type =
    int16_t;
  _channel_type channel;

  // setters for named parameter idiom
  Type & set__signal(
    const float & _arg)
  {
    this->signal = _arg;
    return *this;
  }
  Type & set__channel(
    const int16_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::msg::PwmSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::PwmSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::PwmSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::PwmSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__PwmSignal
    std::shared_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__PwmSignal
    std::shared_ptr<mvp_msgs::msg::PwmSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PwmSignal_ & other) const
  {
    if (this->signal != other.signal) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const PwmSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PwmSignal_

// alias to use template instance with default allocator
using PwmSignal =
  mvp_msgs::msg::PwmSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__PWM_SIGNAL__STRUCT_HPP_
