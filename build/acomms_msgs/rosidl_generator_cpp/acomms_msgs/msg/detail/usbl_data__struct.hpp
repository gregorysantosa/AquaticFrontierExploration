// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acomms_msgs:msg/UsblData.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__STRUCT_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__STRUCT_HPP_

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
// Member 'xyz'
// Member 'enu'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acomms_msgs__msg__UsblData __attribute__((deprecated))
#else
# define DEPRECATED__acomms_msgs__msg__UsblData __declspec(deprecated)
#endif

namespace acomms_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UsblData_
{
  using Type = UsblData_<ContainerAllocator>;

  explicit UsblData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    xyz(_init),
    enu(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_time = 0.0f;
      this->measurement_time = 0.0f;
      this->remote_address = 0l;
      this->propagation_time = 0.0f;
      this->rssi = 0l;
      this->integrity = 0l;
      this->accuracy = 0.0f;
    }
  }

  explicit UsblData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    xyz(_alloc, _init),
    enu(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_time = 0.0f;
      this->measurement_time = 0.0f;
      this->remote_address = 0l;
      this->propagation_time = 0.0f;
      this->rssi = 0l;
      this->integrity = 0l;
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
  using _xyz_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _xyz_type xyz;
  using _enu_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _enu_type enu;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _propagation_time_type =
    float;
  _propagation_time_type propagation_time;
  using _rssi_type =
    int32_t;
  _rssi_type rssi;
  using _integrity_type =
    int32_t;
  _integrity_type integrity;
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
  Type & set__xyz(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->xyz = _arg;
    return *this;
  }
  Type & set__enu(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->enu = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__propagation_time(
    const float & _arg)
  {
    this->propagation_time = _arg;
    return *this;
  }
  Type & set__rssi(
    const int32_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__integrity(
    const int32_t & _arg)
  {
    this->integrity = _arg;
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
    acomms_msgs::msg::UsblData_<ContainerAllocator> *;
  using ConstRawPtr =
    const acomms_msgs::msg::UsblData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::UsblData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::UsblData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acomms_msgs__msg__UsblData
    std::shared_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acomms_msgs__msg__UsblData
    std::shared_ptr<acomms_msgs::msg::UsblData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UsblData_ & other) const
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
    if (this->xyz != other.xyz) {
      return false;
    }
    if (this->enu != other.enu) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->propagation_time != other.propagation_time) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->integrity != other.integrity) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    return true;
  }
  bool operator!=(const UsblData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UsblData_

// alias to use template instance with default allocator
using UsblData =
  acomms_msgs::msg::UsblData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__STRUCT_HPP_
