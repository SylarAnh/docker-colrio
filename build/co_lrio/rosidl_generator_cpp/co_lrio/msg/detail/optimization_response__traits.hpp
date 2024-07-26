// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__TRAITS_HPP_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__TRAITS_HPP_

#include "co_lrio/msg/detail/optimization_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose_to'
#include "nav_msgs/msg/detail/odometry__traits.hpp"
// Member 'keyposes'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<co_lrio::msg::OptimizationResponse>()
{
  return "co_lrio::msg::OptimizationResponse";
}

template<>
inline const char * name<co_lrio::msg::OptimizationResponse>()
{
  return "co_lrio/msg/OptimizationResponse";
}

template<>
struct has_fixed_size<co_lrio::msg::OptimizationResponse>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Odometry>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<co_lrio::msg::OptimizationResponse>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Odometry>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<co_lrio::msg::OptimizationResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__TRAITS_HPP_
