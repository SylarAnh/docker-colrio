// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice
#include "co_lrio/msg/detail/loop_closure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `frame`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
co_lrio__msg__LoopClosure__init(co_lrio__msg__LoopClosure * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    co_lrio__msg__LoopClosure__fini(msg);
    return false;
  }
  // robot0
  // key0
  // robot1
  // key1
  // yaw_diff
  // frame
  if (!sensor_msgs__msg__PointCloud2__init(&msg->frame)) {
    co_lrio__msg__LoopClosure__fini(msg);
    return false;
  }
  // noise
  return true;
}

void
co_lrio__msg__LoopClosure__fini(co_lrio__msg__LoopClosure * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot0
  // key0
  // robot1
  // key1
  // yaw_diff
  // frame
  sensor_msgs__msg__PointCloud2__fini(&msg->frame);
  // noise
}

bool
co_lrio__msg__LoopClosure__are_equal(const co_lrio__msg__LoopClosure * lhs, const co_lrio__msg__LoopClosure * rhs)
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
  // robot0
  if (lhs->robot0 != rhs->robot0) {
    return false;
  }
  // key0
  if (lhs->key0 != rhs->key0) {
    return false;
  }
  // robot1
  if (lhs->robot1 != rhs->robot1) {
    return false;
  }
  // key1
  if (lhs->key1 != rhs->key1) {
    return false;
  }
  // yaw_diff
  if (lhs->yaw_diff != rhs->yaw_diff) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  // noise
  if (lhs->noise != rhs->noise) {
    return false;
  }
  return true;
}

bool
co_lrio__msg__LoopClosure__copy(
  const co_lrio__msg__LoopClosure * input,
  co_lrio__msg__LoopClosure * output)
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
  // robot0
  output->robot0 = input->robot0;
  // key0
  output->key0 = input->key0;
  // robot1
  output->robot1 = input->robot1;
  // key1
  output->key1 = input->key1;
  // yaw_diff
  output->yaw_diff = input->yaw_diff;
  // frame
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  // noise
  output->noise = input->noise;
  return true;
}

co_lrio__msg__LoopClosure *
co_lrio__msg__LoopClosure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__LoopClosure * msg = (co_lrio__msg__LoopClosure *)allocator.allocate(sizeof(co_lrio__msg__LoopClosure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(co_lrio__msg__LoopClosure));
  bool success = co_lrio__msg__LoopClosure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
co_lrio__msg__LoopClosure__destroy(co_lrio__msg__LoopClosure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    co_lrio__msg__LoopClosure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
co_lrio__msg__LoopClosure__Sequence__init(co_lrio__msg__LoopClosure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__LoopClosure * data = NULL;

  if (size) {
    data = (co_lrio__msg__LoopClosure *)allocator.zero_allocate(size, sizeof(co_lrio__msg__LoopClosure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = co_lrio__msg__LoopClosure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        co_lrio__msg__LoopClosure__fini(&data[i - 1]);
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
co_lrio__msg__LoopClosure__Sequence__fini(co_lrio__msg__LoopClosure__Sequence * array)
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
      co_lrio__msg__LoopClosure__fini(&array->data[i]);
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

co_lrio__msg__LoopClosure__Sequence *
co_lrio__msg__LoopClosure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__msg__LoopClosure__Sequence * array = (co_lrio__msg__LoopClosure__Sequence *)allocator.allocate(sizeof(co_lrio__msg__LoopClosure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = co_lrio__msg__LoopClosure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
co_lrio__msg__LoopClosure__Sequence__destroy(co_lrio__msg__LoopClosure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    co_lrio__msg__LoopClosure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
co_lrio__msg__LoopClosure__Sequence__are_equal(const co_lrio__msg__LoopClosure__Sequence * lhs, const co_lrio__msg__LoopClosure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!co_lrio__msg__LoopClosure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
co_lrio__msg__LoopClosure__Sequence__copy(
  const co_lrio__msg__LoopClosure__Sequence * input,
  co_lrio__msg__LoopClosure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(co_lrio__msg__LoopClosure);
    co_lrio__msg__LoopClosure * data =
      (co_lrio__msg__LoopClosure *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!co_lrio__msg__LoopClosure__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          co_lrio__msg__LoopClosure__fini(&data[i]);
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
    if (!co_lrio__msg__LoopClosure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
