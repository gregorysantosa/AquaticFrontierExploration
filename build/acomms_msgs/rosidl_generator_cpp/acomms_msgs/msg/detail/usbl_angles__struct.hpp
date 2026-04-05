// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__STRUCT_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__STRUCT_HPP_

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
# define DEPRECATED__acomms_msgs__msg__UsblAngles __attribute__((deprecated))
#else
# define DEPRECATED__acomms_msgs__msg__UsblAngles __declspec(deprecated)
#endif

namespace acomms_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UsblAngles_
{
  using Type = UsblAngles_<ContainerAllocator>;

  explicit UsblAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_time = 0.0f;
      this->measurement_time = 0.0f;
      this->remote_address = 0l;
      this->local_bearing = 0.0f;
      this->local_elevation = 0.0f;
      this->bearing = 0.0f;
      this->elevation = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->rssi = 0l;
      this->signal_integrity = 0l;
      this->accuracy = 0.0f;
    }
  }

  explicit UsblAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_time = 0.0f;
      this->measurement_time = 0.0f;
      this->remote_address = 0l;
      this->local_bearing = 0.0f;
      this->local_elevation = 0.0f;
      this->bearing = 0.0f;
      this->elevation = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->rssi = 0l;
      this->signal_integrity = 0l;
      this->accuracy = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_time_type =
    float;
  _current_time_type current_time;
  using _measurement_time_type =
    float;
  _measurement_time_type measurement_time;
  using _remote_address_type =
    int32_t;
  _remote_address_type remote_address;
  using _local_bearing_type =
    float;
  _local_bearing_type local_bearing;
  using _local_elevation_type =
    float;
  _local_elevation_type local_elevation;
  using _bearing_type =
    float;
  _bearing_type bearing;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _rssi_type =
    int32_t;
  _rssi_type rssi;
  using _signal_integrity_type =
    int32_t;
  _signal_integrity_type signal_integrity;
  using _accuracy_type =
    float;
  _accuracy_type accuracy;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_time(
    const float & _arg)
  {
    this->current_time = _arg;
    return *this;
  }
  Type & set__measurement_time(
    const float & _arg)
  {
    this->measurement_time = _arg;
    return *this;
  }
  Type & set__remote_address(
    const int32_t & _arg)
  {
    this->remote_address = _arg;
    return *this;
  }
  Type & set__local_bearing(
    const float & _arg)
  {
    this->local_bearing = _arg;
    return *this;
  }
  Type & set__local_elevation(
    const float & _arg)
  {
    this->local_elevation = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__rssi(
    const int32_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__signal_integrity(
    const int32_t & _arg)
  {
    this->signal_integrity = _arg;
    return *this;
  }
  Type & set__accuracy(
    const float & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acomms_msgs::msg::UsblAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const acomms_msgs::msg::UsblAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::UsblAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::UsblAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acomms_msgs__msg__UsblAngles
    std::shared_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acomms_msgs__msg__UsblAngles
    std::shared_ptr<acomms_msgs::msg::UsblAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UsblAngles_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_time != other.current_time) {
      return false;
    }
    if (this->measurement_time != other.measurement_time) {
      return false;
    }
    if (this->remote_address != other.remote_address) {
      return false;
    }
    if (this->local_bearing != other.local_bearing) {
      return false;
    }
    if (this->local_elevation != other.local_elevation) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->signal_integrity != other.signal_integrity) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    return true;
  }
  bool operator!=(const UsblAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UsblAngles_

// alias to use template instance with default allocator
using UsblAngles =
  acomms_msgs::msg::UsblAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__STRUCT_HPP_
