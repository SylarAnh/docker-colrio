// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__TRAITS_HPP_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__TRAITS_HPP_

#include "co_lrio/msg/detail/optimization_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'keyframe'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'pose_to'
// Member 'pose_from'
// Member 'gps_odom'
#include "nav_msgs/msg/detail/odometry__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<co_lrio::msg::OptimizationRequest>()
{
  return "co_lrio::msg::OptimizationRequest";
}

template<>
inline const char * name<co_lrio::msg::OptimizationRequest>()
{
  return "co_lrio/msg/OptimizationRequest";
}

template<>
struct has_fixed_size<co_lrio::msg::OptimizationRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<co_lrio::msg::OptimizationRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<co_lrio::msg::OptimizationRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__TRAITS_HPP_
