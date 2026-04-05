// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_HPP_
#define MVP_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__ChangeState_Request __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__ChangeState_Request __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeState_Request_
{
  using Type = ChangeState_Request_<ContainerAllocator>;

  explicit ChangeState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->caller = "";
    }
  }

  explicit ChangeState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc),
    caller(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->caller = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _caller_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _caller_type caller;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__caller(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->caller = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::ChangeState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::ChangeState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::ChangeState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::ChangeState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__ChangeState_Request
    std::shared_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__ChangeState_Request
    std::shared_ptr<mvp_msgs::srv::ChangeState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeState_Request_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->caller != other.caller) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeState_Request_

// alias to use template instance with default allocator
using ChangeState_Request =
  mvp_msgs::srv::ChangeState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs


// Include directives for member types
// Member 'state'
#include "mvp_msgs/msg/detail/helm_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__ChangeState_Response __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__ChangeState_Response __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeState_Response_
{
  using Type = ChangeState_Response_<ContainerAllocator>;

  explicit ChangeState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ChangeState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;
  using _state_type =
    mvp_msgs::msg::HelmState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__state(
    const mvp_msgs::msg::HelmState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::ChangeState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::ChangeState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::ChangeState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::ChangeState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__ChangeState_Response
    std::shared_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__ChangeState_Response
    std::shared_ptr<mvp_msgs::srv::ChangeState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeState_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeState_Response_

// alias to use template instance with default allocator
using ChangeState_Response =
  mvp_msgs::srv::ChangeState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs

namespace mvp_msgs
{

namespace srv
{

struct ChangeState
{
  using Request = mvp_msgs::srv::ChangeState_Request;
  using Response = mvp_msgs::srv::ChangeState_Response;
};

}  // namespace srv

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_HPP_
