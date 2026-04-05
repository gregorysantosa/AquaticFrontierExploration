// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roslaunch_manager_interfaces:srv/SetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__STRUCT_HPP_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Request __attribute__((deprecated))
#else
# define DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Request __declspec(deprecated)
#endif

namespace roslaunch_manager_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLaunch_Request_
{
  using Type = SetLaunch_Request_<ContainerAllocator>;

  explicit SetLaunch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pkg = "";
      this->file = "";
      this->set = false;
    }
  }

  explicit SetLaunch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pkg(_alloc),
    file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pkg = "";
      this->file = "";
      this->set = false;
    }
  }

  // field types and members
  using _pkg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pkg_type pkg;
  using _file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_type file;
  using _set_type =
    bool;
  _set_type set;

  // setters for named parameter idiom
  Type & set__pkg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pkg = _arg;
    return *this;
  }
  Type & set__file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file = _arg;
    return *this;
  }
  Type & set__set(
    const bool & _arg)
  {
    this->set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Request
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Request
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLaunch_Request_ & other) const
  {
    if (this->pkg != other.pkg) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    if (this->set != other.set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLaunch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLaunch_Request_

// alias to use template instance with default allocator
using SetLaunch_Request =
  roslaunch_manager_interfaces::srv::SetLaunch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roslaunch_manager_interfaces


#ifndef _WIN32
# define DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Response __attribute__((deprecated))
#else
# define DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Response __declspec(deprecated)
#endif

namespace roslaunch_manager_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLaunch_Response_
{
  using Type = SetLaunch_Response_<ContainerAllocator>;

  explicit SetLaunch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetLaunch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Response
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__SetLaunch_Response
    std::shared_ptr<roslaunch_manager_interfaces::srv::SetLaunch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLaunch_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLaunch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLaunch_Response_

// alias to use template instance with default allocator
using SetLaunch_Response =
  roslaunch_manager_interfaces::srv::SetLaunch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roslaunch_manager_interfaces

namespace roslaunch_manager_interfaces
{

namespace srv
{

struct SetLaunch
{
  using Request = roslaunch_manager_interfaces::srv::SetLaunch_Request;
  using Response = roslaunch_manager_interfaces::srv::SetLaunch_Response;
};

}  // namespace srv

}  // namespace roslaunch_manager_interfaces

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__STRUCT_HPP_
