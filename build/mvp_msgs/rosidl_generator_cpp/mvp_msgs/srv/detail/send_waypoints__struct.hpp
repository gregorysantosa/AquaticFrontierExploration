// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:srv/SendWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__STRUCT_HPP_
#define MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wpt'
#include "mvp_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__SendWaypoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__SendWaypoints_Request __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendWaypoints_Request_
{
  using Type = SendWaypoints_Request_<ContainerAllocator>;

  explicit SendWaypoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit SendWaypoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _wpt_type =
    std::vector<mvp_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mvp_msgs::msg::Waypoint_<ContainerAllocator>>>;
  _wpt_type wpt;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__wpt(
    const std::vector<mvp_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mvp_msgs::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->wpt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__SendWaypoints_Request
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__SendWaypoints_Request
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendWaypoints_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->wpt != other.wpt) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendWaypoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendWaypoints_Request_

// alias to use template instance with default allocator
using SendWaypoints_Request =
  mvp_msgs::srv::SendWaypoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs


#ifndef _WIN32
# define DEPRECATED__mvp_msgs__srv__SendWaypoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__srv__SendWaypoints_Response __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendWaypoints_Response_
{
  using Type = SendWaypoints_Response_<ContainerAllocator>;

  explicit SendWaypoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SendWaypoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__srv__SendWaypoints_Response
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__srv__SendWaypoints_Response
    std::shared_ptr<mvp_msgs::srv::SendWaypoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendWaypoints_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendWaypoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendWaypoints_Response_

// alias to use template instance with default allocator
using SendWaypoints_Response =
  mvp_msgs::srv::SendWaypoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mvp_msgs

namespace mvp_msgs
{

namespace srv
{

struct SendWaypoints
{
  using Request = mvp_msgs::srv::SendWaypoints_Request;
  using Response = mvp_msgs::srv::SendWaypoints_Response;
};

}  // namespace srv

}  // namespace mvp_msgs

#endif  // MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__STRUCT_HPP_
