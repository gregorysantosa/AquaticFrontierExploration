// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:srv/SetControlPoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__STRUCT_HPP_
#define MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'setpoint'
#include "mvp_msgs/msg/detail/control_process__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__SetControlPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__SetControlPoint_Request __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlPoint_Request_
{
  using Type = SetControlPoint_Request_<ContainerAllocator>;

  explicit SetControlPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : setpoint(_init)
  {
    (void)_init;
  }

  explicit SetControlPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : setpoint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _setpoint_type =
    mvp_msgs::msg::ControlProcess_<ContainerAllocator>;
  _setpoint_type setpoint;

  // setters for named parameter idiom
  Type & set__setpoint(
    const mvp_msgs::msg::ControlProcess_<ContainerAllocator> & _arg)
  {
    this->setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__SetControlPoint_Request
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__SetControlPoint_Request
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlPoint_Request_ & other) const
  {
    if (this->setpoint != other.setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlPoint_Request_

// alias to use template instance with default allocator
using SetControlPoint_Request =
  mvp_msgs::srv::SetControlPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__SetControlPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__SetControlPoint_Response __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlPoint_Response_
{
  using Type = SetControlPoint_Response_<ContainerAllocator>;

  explicit SetControlPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetControlPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__SetControlPoint_Response
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__SetControlPoint_Response
    std::shared_ptr<mvp_msgs::srv::SetControlPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlPoint_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlPoint_Response_

// alias to use template instance with default allocator
using SetControlPoint_Response =
  mvp_msgs::srv::SetControlPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs

namespace mvp_msgs
{

namespace srv
{

struct SetControlPoint
{
  using Request = mvp_msgs::srv::SetControlPoint_Request;
  using Response = mvp_msgs::srv::SetControlPoint_Response;
};

}  // namespace srv

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__STRUCT_HPP_
