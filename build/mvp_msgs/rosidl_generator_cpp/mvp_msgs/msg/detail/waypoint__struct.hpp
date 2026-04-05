// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mvp_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define MVP_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

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
// Member 'wpt'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'll_wpt'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mvp_msgs__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__mvp_msgs__msg__Waypoint __declspec(deprecated)
#endif

namespace mvp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    wpt(_init),
    ll_wpt(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    wpt(_alloc, _init),
    ll_wpt(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _wpt_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _wpt_type wpt;
  using _ll_wpt_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _ll_wpt_type ll_wpt;
  using _u_type =
    double;
  _u_type u;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__wpt(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->wpt = _arg;
    return *this;
  }
  Type & set__ll_wpt(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->ll_wpt = _arg;
    return *this;
  }
  Type & set__u(
    const double & _arg)
  {
    this->u = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mvp_msgs::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const mvp_msgs::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mvp_msgs::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mvp_msgs__msg__Waypoint
    std::shared_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mvp_msgs__msg__Waypoint
    std::shared_ptr<mvp_msgs::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->wpt != other.wpt) {
      return false;
    }
    if (this->ll_wpt != other.ll_wpt) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  mvp_msgs::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mvp_msgs

#endif  // MVP_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
