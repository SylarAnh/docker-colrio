// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__STRUCT_H_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose_to'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'keyposes'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in msg/OptimizationResponse in the package co_lrio.
typedef struct co_lrio__msg__OptimizationResponse
{
  std_msgs__msg__Header header;
  int32_t robot_id;
  int64_t index_to;
  nav_msgs__msg__Odometry pose_to;
  bool update_keyposes;
  sensor_msgs__msg__PointCloud2 keyposes;
} co_lrio__msg__OptimizationResponse;

// Struct for a sequence of co_lrio__msg__OptimizationResponse.
typedef struct co_lrio__msg__OptimizationResponse__Sequence
{
  co_lrio__msg__OptimizationResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} co_lrio__msg__OptimizationResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__STRUCT_H_
