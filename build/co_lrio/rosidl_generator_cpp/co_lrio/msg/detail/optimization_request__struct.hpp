// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__STRUCT_HPP_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__STRUCT_HPP_

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
// Member 'keyframe'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'pose_to'
// Member 'pose_from'
// Member 'gps_odom'
#include "nav_msgs/msg/detail/odometry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__co_lrio__msg__OptimizationRequest __attribute__((deprecated))
#else
# define DEPRECATED__co_lrio__msg__OptimizationRequest __declspec(deprecated)
#endif

namespace co_lrio
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationRequest_
{
  using Type = OptimizationRequest_<ContainerAllocator>;

  explicit OptimizationRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    keyframe(_init),
    pose_to(_init),
    pose_from(_init),
    gps_odom(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->index_to = 0ll;
      this->index_from = 0ll;
      this->noise = 0.0f;
      this->gps_valid = 0l;
    }
  }

  explicit OptimizationRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    keyframe(_alloc, _init),
    pose_to(_alloc, _init),
    pose_from(_alloc, _init),
    gps_odom(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->index_to = 0ll;
      this->index_from = 0ll;
      this->noise = 0.0f;
      this->gps_valid = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    uint8_t;
  _robot_id_type robot_id;
  using _keyframe_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _keyframe_type keyframe;
  using _index_to_type =
    int64_t;
  _index_to_type index_to;
  using _pose_to_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _pose_to_type pose_to;
  using _index_from_type =
    int64_t;
  _index_from_type index_from;
  using _pose_from_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _pose_from_type pose_from;
  using _noise_type =
    float;
  _noise_type noise;
  using _other_ids_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _other_ids_type other_ids;
  using _distances_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _distances_type distances;
  using _descriptor_vec_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _descriptor_vec_type descriptor_vec;
  using _gps_valid_type =
    int32_t;
  _gps_valid_type gps_valid;
  using _gps_odom_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _gps_odom_type gps_odom;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__keyframe(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->keyframe = _arg;
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
  Type & set__index_from(
    const int64_t & _arg)
  {
    this->index_from = _arg;
    return *this;
  }
  Type & set__pose_from(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->pose_from = _arg;
    return *this;
  }
  Type & set__noise(
    const float & _arg)
  {
    this->noise = _arg;
    return *this;
  }
  Type & set__other_ids(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->other_ids = _arg;
    return *this;
  }
  Type & set__distances(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->distances = _arg;
    return *this;
  }
  Type & set__descriptor_vec(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->descriptor_vec = _arg;
    return *this;
  }
  Type & set__gps_valid(
    const int32_t & _arg)
  {
    this->gps_valid = _arg;
    return *this;
  }
  Type & set__gps_odom(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->gps_odom = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    co_lrio::msg::OptimizationRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const co_lrio::msg::OptimizationRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      co_lrio::msg::OptimizationRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      co_lrio::msg::OptimizationRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__co_lrio__msg__OptimizationRequest
    std::shared_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__co_lrio__msg__OptimizationRequest
    std::shared_ptr<co_lrio::msg::OptimizationRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->keyframe != other.keyframe) {
      return false;
    }
    if (this->index_to != other.index_to) {
      return false;
    }
    if (this->pose_to != other.pose_to) {
      return false;
    }
    if (this->index_from != other.index_from) {
      return false;
    }
    if (this->pose_from != other.pose_from) {
      return false;
    }
    if (this->noise != other.noise) {
      return false;
    }
    if (this->other_ids != other.other_ids) {
      return false;
    }
    if (this->distances != other.distances) {
      return false;
    }
    if (this->descriptor_vec != other.descriptor_vec) {
      return false;
    }
    if (this->gps_valid != other.gps_valid) {
      return false;
    }
    if (this->gps_odom != other.gps_odom) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationRequest_

// alias to use template instance with default allocator
using OptimizationRequest =
  co_lrio::msg::OptimizationRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace co_lrio

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__STRUCT_HPP_
