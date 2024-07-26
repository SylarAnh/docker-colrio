// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__STRUCT_HPP_
#define CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__STRUCT_HPP_

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
// Member 'frame'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__co_lrio__msg__LoopClosure __attribute__((deprecated))
#else
# define DEPRECATED__co_lrio__msg__LoopClosure __declspec(deprecated)
#endif

namespace co_lrio
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoopClosure_
{
  using Type = LoopClosure_<ContainerAllocator>;

  explicit LoopClosure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot0 = 0;
      this->key0 = 0l;
      this->robot1 = 0;
      this->key1 = 0l;
      this->yaw_diff = 0l;
      this->noise = 0.0f;
    }
  }

  explicit LoopClosure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot0 = 0;
      this->key0 = 0l;
      this->robot1 = 0;
      this->key1 = 0l;
      this->yaw_diff = 0l;
      this->noise = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot0_type =
    uint8_t;
  _robot0_type robot0;
  using _key0_type =
    int32_t;
  _key0_type key0;
  using _robot1_type =
    uint8_t;
  _robot1_type robot1;
  using _key1_type =
    int32_t;
  _key1_type key1;
  using _yaw_diff_type =
    int32_t;
  _yaw_diff_type yaw_diff;
  using _frame_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _frame_type frame;
  using _noise_type =
    float;
  _noise_type noise;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot0(
    const uint8_t & _arg)
  {
    this->robot0 = _arg;
    return *this;
  }
  Type & set__key0(
    const int32_t & _arg)
  {
    this->key0 = _arg;
    return *this;
  }
  Type & set__robot1(
    const uint8_t & _arg)
  {
    this->robot1 = _arg;
    return *this;
  }
  Type & set__key1(
    const int32_t & _arg)
  {
    this->key1 = _arg;
    return *this;
  }
  Type & set__yaw_diff(
    const int32_t & _arg)
  {
    this->yaw_diff = _arg;
    return *this;
  }
  Type & set__frame(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__noise(
    const float & _arg)
  {
    this->noise = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    co_lrio::msg::LoopClosure_<ContainerAllocator> *;
  using ConstRawPtr =
    const co_lrio::msg::LoopClosure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      co_lrio::msg::LoopClosure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      co_lrio::msg::LoopClosure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__co_lrio__msg__LoopClosure
    std::shared_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__co_lrio__msg__LoopClosure
    std::shared_ptr<co_lrio::msg::LoopClosure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoopClosure_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot0 != other.robot0) {
      return false;
    }
    if (this->key0 != other.key0) {
      return false;
    }
    if (this->robot1 != other.robot1) {
      return false;
    }
    if (this->key1 != other.key1) {
      return false;
    }
    if (this->yaw_diff != other.yaw_diff) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->noise != other.noise) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoopClosure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoopClosure_

// alias to use template instance with default allocator
using LoopClosure =
  co_lrio::msg::LoopClosure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace co_lrio

#endif  // CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__STRUCT_HPP_
