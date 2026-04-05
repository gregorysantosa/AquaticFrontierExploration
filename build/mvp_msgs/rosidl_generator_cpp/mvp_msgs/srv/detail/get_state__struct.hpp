// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATE__STRUCT_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__GetState_Request __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__GetState_Request __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetState_Request_
{
  using Type = GetState_Request_<ContainerAllocator>;

  explicit GetState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit GetState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
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

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::GetState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::GetState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__GetState_Request
    std::shared_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__GetState_Request
    std::shared_ptr<mvp_msgs::srv::GetState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetState_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetState_Request_

// alias to use template instance with default allocator
using GetState_Request =
  mvp_msgs::srv::GetState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs


// Include directives for member types
// Member 'state'
#include "mvp_msgs/msg/detail/helm_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__GetState_Response __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__GetState_Response __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetState_Response_
{
  using Type = GetState_Response_<ContainerAllocator>;

  explicit GetState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit GetState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    mvp_msgs::msg::HelmState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const mvp_msgs::msg::HelmState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::GetState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::GetState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__GetState_Response
    std::shared_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__GetState_Response
    std::shared_ptr<mvp_msgs::srv::GetState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetState_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetState_Response_

// alias to use template instance with default allocator
using GetState_Response =
  mvp_msgs::srv::GetState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs

namespace mvp_msgs
{

namespace srv
{

struct GetState
{
  using Request = mvp_msgs::srv::GetState_Request;
  using Response = mvp_msgs::srv::GetState_Response;
};

}  // namespace srv

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATE__STRUCT_HPP_
