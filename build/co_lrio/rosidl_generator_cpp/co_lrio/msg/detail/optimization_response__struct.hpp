// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__STRUCT_HPP_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose_to'
#include "nav_msgs/msg/detail/odometry__struct.hpp"
// Member 'keyposes'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__co_lrio__msg__OptimizationResponse __attribute__((deprecated))
#else
# define DEPRECATED__co_lrio__msg__OptimizationResponse __declspec(deprecated)
#endif

namespace co_lrio
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationResponse_
{
  using Type = OptimizationResponse_<ContainerAllocator>;

  explicit OptimizationResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose_to(_init),
    keyposes(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->index_to = 0ll;
      this->update_keyposes = false;
    }
  }

  explicit OptimizationResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose_to(_alloc, _init),
    keyposes(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->index_to = 0ll;
      this->update_keyposes = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _index_to_type =
    int64_t;
  _index_to_type index_to;
  using _pose_to_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _pose_to_type pose_to;
  using _update_keyposes_type =
    bool;
  _update_keyposes_type update_keyposes;
  using _keyposes_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _keyposes_type keyposes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__index_to(
    const int64_t & _arg)
  {
    this->index_to = _arg;
    return *this;
  }
  Type & set__pose_to(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->pose_to = _arg;
    return *this;
  }
  Type & set__update_keyposes(
    const bool & _arg)
  {
    this->update_keyposes = _arg;
    return *this;
  }
  Type & set__keyposes(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->keyposes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    co_lrio::msg::OptimizationResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const co_lrio::msg::OptimizationResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      co_lrio::msg::OptimizationResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      co_lrio::msg::OptimizationResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__co_lrio__msg__OptimizationResponse
    std::shared_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__co_lrio__msg__OptimizationResponse
    std::shared_ptr<co_lrio::msg::OptimizationResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->index_to != other.index_to) {
      return false;
    }
    if (this->pose_to != other.pose_to) {
      return false;
    }
    if (this->update_keyposes != other.update_keyposes) {
      return false;
    }
    if (this->keyposes != other.keyposes) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationResponse_

// alias to use template instance with default allocator
using OptimizationResponse =
  co_lrio::msg::OptimizationResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace co_lrio

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__STRUCT_HPP_
