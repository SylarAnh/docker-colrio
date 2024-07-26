// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice
#include "co_lrio/msg/detail/optimization_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `keyframe`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `pose_to`
// Member `pose_from`
// Member `gps_odom`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `other_ids`
// Member `distances`
// Member `descriptor_vec`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
co_lrio__msg__OptimizationRequest__init(co_lrio__msg__OptimizationRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // robot_id
  // keyframe
  if (!sensor_msgs__msg__PointCloud2__init(&msg->keyframe)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // index_to
  // pose_to
  if (!nav_msgs__msg__Odometry__init(&msg->pose_to)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // index_from
  // pose_from
  if (!nav_msgs__msg__Odometry__init(&msg->pose_from)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // noise
  // other_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->other_ids, 0)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // distances
  if (!rosidl_runtime_c__float__Sequence__init(&msg->distances, 0)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // descriptor_vec
  if (!rosidl_runtime_c__float__Sequence__init(&msg->descriptor_vec, 0)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  // gps_valid
  // gps_odom
  if (!nav_msgs__msg__Odometry__init(&msg->gps_odom)) {
    co_lrio__msg__OptimizationRequest__fini(msg);
    return false;
  }
  return true;
}

void
co_lrio__msg__OptimizationRequest__fini(co_lrio__msg__OptimizationRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  // keyframe
  sensor_msgs__msg__PointCloud2__fini(&msg->keyframe);
  // index_to
  // pose_to
  nav_msgs__msg__Odometry__fini(&msg->pose_to);
  // index_from
  // pose_from
  nav_msgs__msg__Odometry__fini(&msg->pose_from);
  // noise
  // other_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->other_ids);
  // distances
  rosidl_runtime_c__float__Sequence__fini(&msg->distances);
  // descriptor_vec
  rosidl_runtime_c__float__Sequence__fini(&msg->descriptor_vec);
  // gps_valid
  // gps_odom
  nav_msgs__msg__Odometry__fini(&msg->gps_odom);
}

bool
co_lrio__msg__OptimizationRequest__are_equal(const co_lrio__msg__OptimizationRequest * lhs, const co_lrio__msg__OptimizationRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // keyframe
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->keyframe), &(rhs->keyframe)))
  {
    return false;
  }
  // index_to
  if (lhs->index_to != rhs->index_to) {
    return false;
  }
  // pose_to
  if (!nav_msgs__msg__Odometry__are_equal(
      &(lhs->pose_to), &(rhs->pose_to)))
  {
    return false;
  }
  // index_from
  if (lhs->index_from != rhs->index_from) {
    return false;
  }
  // pose_from
  if (!nav_msgs__msg__Odometry__are_equal(
      &(lhs->pose_from), &(rhs->pose_from)))
  {
    return false;
  }
  // noise
  if (lhs->noise != rhs->noise) {
    return false;
  }
  // other_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->other_ids), &(rhs->other_ids)))
  {
    return false;
  }
  // distances
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->distances), &(rhs->distances)))
  {
    return false;
  }
  // descriptor_vec
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->descriptor_vec), &(rhs->descriptor_vec)))
  {
    return false;
  }
  // gps_valid
  if (lhs->gps_valid != rhs->gps_valid) {
    return false;
  }
  // gps_odom
  if (!nav_msgs__msg__Odometry__are_equal(
      &(lhs->gps_odom), &(rhs->gps_odom)))
  {
    return false;
  }
  return true;
}

bool
co_lrio__msg__OptimizationRequest__copy(
  const co_lrio__msg__OptimizationRequest * input,
  co_lrio__msg__OptimizationRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // keyframe
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->keyframe), &(output->keyframe)))
  {
    return false;
  }
  // index_to
  output->index_to = input->index_to;
  // pose_to
  if (!nav_msgs__msg__Odometry__copy(
      &(input->pose_to), &(output->pose_to)))
  {
    return false;
  }
  // index_from
  output->index_from = input->index_from;
  // pose_from
  if (!nav_msgs__msg__Odometry__copy(
      &(input->pose_from), &(output->pose_from)))
  {
    return false;
  }
  // noise
  output->noise = input->noise;
  // other_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->other_ids), &(output->other_ids)))
  {
    return false;
  }
  // distances
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->distances), &(output->distances)))
  {
    return false;
  }
  // descriptor_vec
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->descriptor_vec), &(output->descriptor_vec)))
  {
    return false;
  }
  // gps_valid
  output->gps_valid = input->gps_valid;
  // gps_odom
  if (!nav_msgs__msg__Odometry__copy(
      &(input->gps_odom), &(output->gps_odom)))
  {
    return false;
  }
  return true;
}

co_lrio__msg__OptimizationRequest *
co_lrio__msg__OptimizationRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__OptimizationRequest * msg = (co_lrio__msg__OptimizationRequest *)allocator.allocate(sizeof(co_lrio__msg__OptimizationRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(co_lrio__msg__OptimizationRequest));
  bool success = co_lrio__msg__OptimizationRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
co_lrio__msg__OptimizationRequest__destroy(co_lrio__msg__OptimizationRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    co_lrio__msg__OptimizationRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
co_lrio__msg__OptimizationRequest__Sequence__init(co_lrio__msg__OptimizationRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__OptimizationRequest * data = NULL;

  if (size) {
    data = (co_lrio__msg__OptimizationRequest *)allocator.zero_allocate(size, sizeof(co_lrio__msg__OptimizationRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = co_lrio__msg__OptimizationRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        co_lrio__msg__OptimizationRequest__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
co_lrio__msg__OptimizationRequest__Sequence__fini(co_lrio__msg__OptimizationRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      co_lrio__msg__OptimizationRequest__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

co_lrio__msg__OptimizationRequest__Sequence *
co_lrio__msg__OptimizationRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__OptimizationRequest__Sequence * array = (co_lrio__msg__OptimizationRequest__Sequence *)allocator.allocate(sizeof(co_lrio__msg__OptimizationRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = co_lrio__msg__OptimizationRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
co_lrio__msg__OptimizationRequest__Sequence__destroy(co_lrio__msg__OptimizationRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    co_lrio__msg__OptimizationRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
co_lrio__msg__OptimizationRequest__Sequence__are_equal(const co_lrio__msg__OptimizationRequest__Sequence * lhs, const co_lrio__msg__OptimizationRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!co_lrio__msg__OptimizationRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
co_lrio__msg__OptimizationRequest__Sequence__copy(
  const co_lrio__msg__OptimizationRequest__Sequence * input,
  co_lrio__msg__OptimizationRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(co_lrio__msg__OptimizationRequest);
    co_lrio__msg__OptimizationRequest * data =
      (co_lrio__msg__OptimizationRequest *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!co_lrio__msg__OptimizationRequest__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          co_lrio__msg__OptimizationRequest__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!co_lrio__msg__OptimizationRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
