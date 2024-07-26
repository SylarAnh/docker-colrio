// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice
#include "co_lrio/msg/detail/optimization_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose_to`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `keyposes`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
co_lrio__msg__OptimizationResponse__init(co_lrio__msg__OptimizationResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    co_lrio__msg__OptimizationResponse__fini(msg);
    return false;
  }
  // robot_id
  // index_to
  // pose_to
  if (!nav_msgs__msg__Odometry__init(&msg->pose_to)) {
    co_lrio__msg__OptimizationResponse__fini(msg);
    return false;
  }
  // update_keyposes
  // keyposes
  if (!sensor_msgs__msg__PointCloud2__init(&msg->keyposes)) {
    co_lrio__msg__OptimizationResponse__fini(msg);
    return false;
  }
  return true;
}

void
co_lrio__msg__OptimizationResponse__fini(co_lrio__msg__OptimizationResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  // index_to
  // pose_to
  nav_msgs__msg__Odometry__fini(&msg->pose_to);
  // update_keyposes
  // keyposes
  sensor_msgs__msg__PointCloud2__fini(&msg->keyposes);
}

bool
co_lrio__msg__OptimizationResponse__are_equal(const co_lrio__msg__OptimizationResponse * lhs, const co_lrio__msg__OptimizationResponse * rhs)
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
  // update_keyposes
  if (lhs->update_keyposes != rhs->update_keyposes) {
    return false;
  }
  // keyposes
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->keyposes), &(rhs->keyposes)))
  {
    return false;
  }
  return true;
}

bool
co_lrio__msg__OptimizationResponse__copy(
  const co_lrio__msg__OptimizationResponse * input,
  co_lrio__msg__OptimizationResponse * output)
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
  // index_to
  output->index_to = input->index_to;
  // pose_to
  if (!nav_msgs__msg__Odometry__copy(
      &(input->pose_to), &(output->pose_to)))
  {
    return false;
  }
  // update_keyposes
  output->update_keyposes = input->update_keyposes;
  // keyposes
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->keyposes), &(output->keyposes)))
  {
    return false;
  }
  return true;
}

co_lrio__msg__OptimizationResponse *
co_lrio__msg__OptimizationResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__OptimizationResponse * msg = (co_lrio__msg__OptimizationResponse *)allocator.allocate(sizeof(co_lrio__msg__OptimizationResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(co_lrio__msg__OptimizationResponse));
  bool success = co_lrio__msg__OptimizationResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
co_lrio__msg__OptimizationResponse__destroy(co_lrio__msg__OptimizationResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    co_lrio__msg__OptimizationResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
co_lrio__msg__OptimizationResponse__Sequence__init(co_lrio__msg__OptimizationResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__OptimizationResponse * data = NULL;

  if (size) {
    data = (co_lrio__msg__OptimizationResponse *)allocator.zero_allocate(size, sizeof(co_lrio__msg__OptimizationResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = co_lrio__msg__OptimizationResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        co_lrio__msg__OptimizationResponse__fini(&data[i - 1]);
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
co_lrio__msg__OptimizationResponse__Sequence__fini(co_lrio__msg__OptimizationResponse__Sequence * array)
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
      co_lrio__msg__OptimizationResponse__fini(&array->data[i]);
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

co_lrio__msg__OptimizationResponse__Sequence *
co_lrio__msg__OptimizationResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__OptimizationResponse__Sequence * array = (co_lrio__msg__OptimizationResponse__Sequence *)allocator.allocate(sizeof(co_lrio__msg__OptimizationResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = co_lrio__msg__OptimizationResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
co_lrio__msg__OptimizationResponse__Sequence__destroy(co_lrio__msg__OptimizationResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    co_lrio__msg__OptimizationResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
co_lrio__msg__OptimizationResponse__Sequence__are_equal(const co_lrio__msg__OptimizationResponse__Sequence * lhs, const co_lrio__msg__OptimizationResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!co_lrio__msg__OptimizationResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
co_lrio__msg__OptimizationResponse__Sequence__copy(
  const co_lrio__msg__OptimizationResponse__Sequence * input,
  co_lrio__msg__OptimizationResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(co_lrio__msg__OptimizationResponse);
    co_lrio__msg__OptimizationResponse * data =
      (co_lrio__msg__OptimizationResponse *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!co_lrio__msg__OptimizationResponse__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          co_lrio__msg__OptimizationResponse__fini(&data[i]);
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
    if (!co_lrio__msg__OptimizationResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
