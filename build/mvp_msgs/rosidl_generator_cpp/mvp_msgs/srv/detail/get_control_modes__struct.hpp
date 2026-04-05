// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__GetControlModes_Request __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__GetControlModes_Request __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetControlModes_Request_
{
  using Type = GetControlModes_Request_<ContainerAllocator>;

  explicit GetControlModes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetControlModes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__GetControlModes_Request
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__GetControlModes_Request
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetControlModes_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetControlModes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetControlModes_Request_

// alias to use template instance with default allocator
using GetControlModes_Request =
  mvp_msgs::srv::GetControlModes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs


// Include directives for member types
// Member 'modes'
#include "mvp_msgs/msg/detail/control_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__GetControlModes_Response __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__GetControlModes_Response __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetControlModes_Response_
{
  using Type = GetControlModes_Response_<ContainerAllocator>;

  explicit GetControlModes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetControlModes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__GetControlModes_Response
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__GetControlModes_Response
    std::shared_ptr<mvp_msgs::srv::GetControlModes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetControlModes_Response_ & other) const
  {
    if (this->modes != other.modes) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetControlModes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetControlModes_Response_

// alias to use template instance with default allocator
using GetControlModes_Response =
  mvp_msgs::srv::GetControlModes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs

namespace mvp_msgs
{

namespace srv
{

struct GetControlModes
{
  using Request = mvp_msgs::srv::GetControlModes_Request;
  using Response = mvp_msgs::srv::GetControlModes_Response;
};

}  // namespace srv

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_HPP_
