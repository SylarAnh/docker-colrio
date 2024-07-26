// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__STRUCT_H_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__STRUCT_H_

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
// Member 'keyframe'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'pose_to'
// Member 'pose_from'
// Member 'gps_odom'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'other_ids'
// Member 'distances'
// Member 'descriptor_vec'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/OptimizationRequest in the package co_lrio.
typedef struct co_lrio__msg__OptimizationRequest
{
  std_msgs__msg__Header header;
  uint8_t robot_id;
  sensor_msgs__msg__PointCloud2 keyframe;
  int64_t index_to;
  nav_msgs__msg__Odometry pose_to;
  int64_t index_from;
  nav_msgs__msg__Odometry pose_from;
  float noise;
  rosidl_runtime_c__int32__Sequence other_ids;
  rosidl_runtime_c__float__Sequence distances;
  rosidl_runtime_c__float__Sequence descriptor_vec;
  int32_t gps_valid;
  nav_msgs__msg__Odometry gps_odom;
} co_lrio__msg__OptimizationRequest;

// Struct for a sequence of co_lrio__msg__OptimizationRequest.
typedef struct co_lrio__msg__OptimizationRequest__Sequence
{
  co_lrio__msg__OptimizationRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} co_lrio__msg__OptimizationRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__STRUCT_H_
