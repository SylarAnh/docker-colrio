// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__STRUCT_H_
#define CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__STRUCT_H_

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
// Member 'frame'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in msg/LoopClosure in the package co_lrio.
typedef struct co_lrio__msg__LoopClosure
{
  std_msgs__msg__Header header;
  uint8_t robot0;
  int32_t key0;
  uint8_t robot1;
  int32_t key1;
  int32_t yaw_diff;
  sensor_msgs__msg__PointCloud2 frame;
  float noise;
} co_lrio__msg__LoopClosure;

// Struct for a sequence of co_lrio__msg__LoopClosure.
typedef struct co_lrio__msg__LoopClosure__Sequence
{
  co_lrio__msg__LoopClosure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} co_lrio__msg__LoopClosure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__STRUCT_H_
