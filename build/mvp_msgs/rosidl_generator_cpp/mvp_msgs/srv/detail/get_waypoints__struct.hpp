// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_HPP_
#define MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'count'
#include "std_msgs/msg/detail/int16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__GetWaypoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__GetWaypoints_Request __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoints_Request_
{
  using Type = GetWaypoints_Request_<ContainerAllocator>;

  explicit GetWaypoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : count(_init)
  {
    (void)_init;
  }

  explicit GetWaypoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : count(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _count_type =
    std_msgs::msg::Int16_<ContainerAllocator>;
  _count_type count;

  // setters for named parameter idiom
  Type & set__count(
    const std_msgs::msg::Int16_<ContainerAllocator> & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__GetWaypoints_Request
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__GetWaypoints_Request
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoints_Request_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoints_Request_

// alias to use template instance with default allocator
using GetWaypoints_Request =
  mvp_msgs::srv::GetWaypoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs


// Include directives for member types
// Member 'wpt'
#include "mvp_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__GetWaypoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__GetWaypoints_Response __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoints_Response_
{
  using Type = GetWaypoints_Response_<ContainerAllocator>;

  explicit GetWaypoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetWaypoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _wpt_type =
    std::vector<mvp_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mvp_msgs::msg::Waypoint_<ContainerAllocator>>>;
  _wpt_type wpt;

  // setters for named parameter idiom
  Type & set__wpt(
    const std::vector<mvp_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mvp_msgs::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->wpt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__GetWaypoints_Response
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__GetWaypoints_Response
    std::shared_ptr<mvp_msgs::srv::GetWaypoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoints_Response_ & other) const
  {
    if (this->wpt != other.wpt) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoints_Response_

// alias to use template instance with default allocator
using GetWaypoints_Response =
  mvp_msgs::srv::GetWaypoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs

namespace mvp_msgs
{

namespace srv
{

struct GetWaypoints
{
  using Request = mvp_msgs::srv::GetWaypoints_Request;
  using Response = mvp_msgs::srv::GetWaypoints_Response;
};

}  // namespace srv

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_HPP_
