// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roslaunch_manager_interfaces:srv/GetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__STRUCT_HPP_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Request __attribute__((deprecated))
#else
# define DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Request __declspec(deprecated)
#endif

namespace roslaunch_manager_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLaunch_Request_
{
  using Type = GetLaunch_Request_<ContainerAllocator>;

  explicit GetLaunch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetLaunch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Request
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Request
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLaunch_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLaunch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLaunch_Request_

// alias to use template instance with default allocator
using GetLaunch_Request =
  roslaunch_manager_interfaces::srv::GetLaunch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roslaunch_manager_interfaces


#ifndef _WIN32
# define DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Response __attribute__((deprecated))
#else
# define DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Response __declspec(deprecated)
#endif

namespace roslaunch_manager_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLaunch_Response_
{
  using Type = GetLaunch_Response_<ContainerAllocator>;

  explicit GetLaunch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetLaunch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _list_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _list_type list;

  // setters for named parameter idiom
  Type & set__list(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Response
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roslaunch_manager_interfaces__srv__GetLaunch_Response
    std::shared_ptr<roslaunch_manager_interfaces::srv::GetLaunch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLaunch_Response_ & other) const
  {
    if (this->list != other.list) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLaunch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLaunch_Response_

// alias to use template instance with default allocator
using GetLaunch_Response =
  roslaunch_manager_interfaces::srv::GetLaunch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roslaunch_manager_interfaces

namespace roslaunch_manager_interfaces
{

namespace srv
{

struct GetLaunch
{
  using Request = roslaunch_manager_interfaces::srv::GetLaunch_Request;
  using Response = roslaunch_manager_interfaces::srv::GetLaunch_Response;
};

}  // namespace srv

}  // namespace roslaunch_manager_interfaces

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__STRUCT_HPP_
