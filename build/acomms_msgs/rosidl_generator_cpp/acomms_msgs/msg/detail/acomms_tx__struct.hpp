// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acomms_msgs:msg/AcommsTx.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__STRUCT_HPP_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__STRUCT_HPP_

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
# define DEPRECATED__acomms_msgs__msg__AcommsTx __attribute__((deprecated))
#else
# define DEPRECATED__acomms_msgs__msg__AcommsTx __declspec(deprecated)
#endif

namespace acomms_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcommsTx_
{
  using Type = AcommsTx_<ContainerAllocator>;

  explicit AcommsTx_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subbuffer_id = "";
      this->data = "";
    }
  }

  explicit AcommsTx_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    subbuffer_id(_alloc),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subbuffer_id = "";
      this->data = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _subbuffer_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subbuffer_id_type subbuffer_id;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__subbuffer_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subbuffer_id = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acomms_msgs::msg::AcommsTx_<ContainerAllocator> *;
  using ConstRawPtr =
    const acomms_msgs::msg::AcommsTx_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::AcommsTx_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acomms_msgs::msg::AcommsTx_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acomms_msgs__msg__AcommsTx
    std::shared_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acomms_msgs__msg__AcommsTx
    std::shared_ptr<acomms_msgs::msg::AcommsTx_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcommsTx_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->subbuffer_id != other.subbuffer_id) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcommsTx_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcommsTx_

// alias to use template instance with default allocator
using AcommsTx =
  acomms_msgs::msg::AcommsTx_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace acomms_msgs

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__STRUCT_HPP_
