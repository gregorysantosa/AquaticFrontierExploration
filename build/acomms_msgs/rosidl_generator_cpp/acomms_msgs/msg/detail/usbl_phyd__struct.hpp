// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acomms_msgs:msg/UsblPhyd.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__STRUCT_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__STRUCT_HPP_

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
# define DEPRECATED__acomms_msgs__msg__UsblPhyd __attribute__((deprecated))
#else
# define DEPRECATED__acomms_msgs__msg__UsblPhyd __declspec(deprecated)
#endif

namespace acomms_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UsblPhyd_
{
  using Type = UsblPhyd_<ContainerAllocator>;

  explicit UsblPhyd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_time = 0.0f;
      this->measurement_time = 0.0f;
      this->remote_address = 0l;
      this->fix_type = false;
      this->delay_1_5 = 0l;
      this->delay_2_5 = 0l;
      this->delay_3_5 = 0l;
      this->delay_4_5 = 0l;
      this->delay_1_2 = 0l;
      this->delay_4_1 = 0l;
      this->delay_3_2 = 0l;
      this->delay_3_4 = 0l;
    }
  }

  explicit UsblPhyd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_time = 0.0f;
      this->measurement_time = 0.0f;
      this->remote_address = 0l;
      this->fix_type = false;
      this->delay_1_5 = 0l;
      this->delay_2_5 = 0l;
      this->delay_3_5 = 0l;
      this->delay_4_5 = 0l;
      this->delay_1_2 = 0l;
      this->delay_4_1 = 0l;
      this->delay_3_2 = 0l;
      this->delay_3_4 = 0l;
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
  using _fix_type_type =
    bool;
  _fix_type_type fix_type;
  using _delay_1_5_type =
    int32_t;
  _delay_1_5_type delay_1_5;
  using _delay_2_5_type =
    int32_t;
  _delay_2_5_type delay_2_5;
  using _delay_3_5_type =
    int32_t;
  _delay_3_5_type delay_3_5;
  using _delay_4_5_type =
    int32_t;
  _delay_4_5_type delay_4_5;
  using _delay_1_2_type =
    int32_t;
  _delay_1_2_type delay_1_2;
  using _delay_4_1_type =
    int32_t;
  _delay_4_1_type delay_4_1;
  using _delay_3_2_type =
    int32_t;
  _delay_3_2_type delay_3_2;
  using _delay_3_4_type =
    int32_t;
  _delay_3_4_type delay_3_4;

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
  Type & set__fix_type(
    const bool & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__delay_1_5(
    const int32_t & _arg)
  {
    this->delay_1_5 = _arg;
    return *this;
  }
  Type & set__delay_2_5(
    const int32_t & _arg)
  {
    this->delay_2_5 = _arg;
    return *this;
  }
  Type & set__delay_3_5(
    const int32_t & _arg)
  {
    this->delay_3_5 = _arg;
    return *this;
  }
  Type & set__delay_4_5(
    const int32_t & _arg)
  {
    this->delay_4_5 = _arg;
    return *this;
  }
  Type & set__delay_1_2(
    const int32_t & _arg)
  {
    this->delay_1_2 = _arg;
    return *this;
  }
  Type & set__delay_4_1(
    const int32_t & _arg)
  {
    this->delay_4_1 = _arg;
    return *this;
  }
  Type & set__delay_3_2(
    const int32_t & _arg)
  {
    this->delay_3_2 = _arg;
    return *this;
  }
  Type & set__delay_3_4(
    const int32_t & _arg)
  {
    this->delay_3_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acomms_msgs::msg::UsblPhyd_<ContainerAllocator> *;
  using ConstRawPtr =
    const acomms_msgs::msg::UsblPhyd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::UsblPhyd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::UsblPhyd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acomms_msgs__msg__UsblPhyd
    std::shared_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acomms_msgs__msg__UsblPhyd
    std::shared_ptr<acomms_msgs::msg::UsblPhyd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UsblPhyd_ & other) const
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
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->delay_1_5 != other.delay_1_5) {
      return false;
    }
    if (this->delay_2_5 != other.delay_2_5) {
      return false;
    }
    if (this->delay_3_5 != other.delay_3_5) {
      return false;
    }
    if (this->delay_4_5 != other.delay_4_5) {
      return false;
    }
    if (this->delay_1_2 != other.delay_1_2) {
      return false;
    }
    if (this->delay_4_1 != other.delay_4_1) {
      return false;
    }
    if (this->delay_3_2 != other.delay_3_2) {
      return false;
    }
    if (this->delay_3_4 != other.delay_3_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const UsblPhyd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UsblPhyd_

// alias to use template instance with default allocator
using UsblPhyd =
  acomms_msgs::msg::UsblPhyd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__STRUCT_HPP_
