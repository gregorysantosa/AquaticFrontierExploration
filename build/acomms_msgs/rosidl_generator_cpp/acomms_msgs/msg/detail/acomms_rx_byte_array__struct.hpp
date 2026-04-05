// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acomms_msgs:msg/AcommsRxByteArray.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__STRUCT_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__STRUCT_HPP_

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
// Member 'msg'
#include "std_msgs/msg/detail/u_int8_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acomms_msgs__msg__AcommsRxByteArray __attribute__((deprecated))
#else
# define DEPRECATED__acomms_msgs__msg__AcommsRxByteArray __declspec(deprecated)
#endif

namespace acomms_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcommsRxByteArray_
{
  using Type = AcommsRxByteArray_<ContainerAllocator>;

  explicit AcommsRxByteArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    msg(_init)
  {
    (void)_init;
  }

  explicit AcommsRxByteArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    msg(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _msg_type =
    std_msgs::msg::UInt8MultiArray_<ContainerAllocator>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__msg(
    const std_msgs::msg::UInt8MultiArray_<ContainerAllocator> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acomms_msgs__msg__AcommsRxByteArray
    std::shared_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acomms_msgs__msg__AcommsRxByteArray
    std::shared_ptr<acomms_msgs::msg::AcommsRxByteArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcommsRxByteArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcommsRxByteArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcommsRxByteArray_

// alias to use template instance with default allocator
using AcommsRxByteArray =
  acomms_msgs::msg::AcommsRxByteArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__STRUCT_HPP_
