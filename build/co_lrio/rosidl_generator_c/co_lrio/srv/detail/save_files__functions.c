// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from co_lrio:srv/SaveFiles.idl
// generated code does not contain a copyright notice
#include "co_lrio/srv/detail/save_files__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `destination`
#include "rosidl_runtime_c/string_functions.h"

bool
co_lrio__srv__SaveFiles_Request__init(co_lrio__srv__SaveFiles_Request * msg)
{
  if (!msg) {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__init(&msg->destination)) {
    co_lrio__srv__SaveFiles_Request__fini(msg);
    return false;
  }
  return true;
}

void
co_lrio__srv__SaveFiles_Request__fini(co_lrio__srv__SaveFiles_Request * msg)
{
  if (!msg) {
    return;
  }
  // destination
  rosidl_runtime_c__String__fini(&msg->destination);
}

bool
co_lrio__srv__SaveFiles_Request__are_equal(const co_lrio__srv__SaveFiles_Request * lhs, const co_lrio__srv__SaveFiles_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination), &(rhs->destination)))
  {
    return false;
  }
  return true;
}

bool
co_lrio__srv__SaveFiles_Request__copy(
  const co_lrio__srv__SaveFiles_Request * input,
  co_lrio__srv__SaveFiles_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__copy(
      &(input->destination), &(output->destination)))
  {
    return false;
  }
  return true;
}

co_lrio__srv__SaveFiles_Request *
co_lrio__srv__SaveFiles_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__srv__SaveFiles_Request * msg = (co_lrio__srv__SaveFiles_Request *)allocator.allocate(sizeof(co_lrio__srv__SaveFiles_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(co_lrio__srv__SaveFiles_Request));
  bool success = co_lrio__srv__SaveFiles_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
co_lrio__srv__SaveFiles_Request__destroy(co_lrio__srv__SaveFiles_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    co_lrio__srv__SaveFiles_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
co_lrio__srv__SaveFiles_Request__Sequence__init(co_lrio__srv__SaveFiles_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__srv__SaveFiles_Request * data = NULL;

  if (size) {
    data = (co_lrio__srv__SaveFiles_Request *)allocator.zero_allocate(size, sizeof(co_lrio__srv__SaveFiles_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = co_lrio__srv__SaveFiles_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        co_lrio__srv__SaveFiles_Request__fini(&data[i - 1]);
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
co_lrio__srv__SaveFiles_Request__Sequence__fini(co_lrio__srv__SaveFiles_Request__Sequence * array)
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
      co_lrio__srv__SaveFiles_Request__fini(&array->data[i]);
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

co_lrio__srv__SaveFiles_Request__Sequence *
co_lrio__srv__SaveFiles_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__srv__SaveFiles_Request__Sequence * array = (co_lrio__srv__SaveFiles_Request__Sequence *)allocator.allocate(sizeof(co_lrio__srv__SaveFiles_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = co_lrio__srv__SaveFiles_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
co_lrio__srv__SaveFiles_Request__Sequence__destroy(co_lrio__srv__SaveFiles_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    co_lrio__srv__SaveFiles_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
co_lrio__srv__SaveFiles_Request__Sequence__are_equal(const co_lrio__srv__SaveFiles_Request__Sequence * lhs, const co_lrio__srv__SaveFiles_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!co_lrio__srv__SaveFiles_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
co_lrio__srv__SaveFiles_Request__Sequence__copy(
  const co_lrio__srv__SaveFiles_Request__Sequence * input,
  co_lrio__srv__SaveFiles_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(co_lrio__srv__SaveFiles_Request);
    co_lrio__srv__SaveFiles_Request * data =
      (co_lrio__srv__SaveFiles_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!co_lrio__srv__SaveFiles_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          co_lrio__srv__SaveFiles_Request__fini(&data[i]);
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
    if (!co_lrio__srv__SaveFiles_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
co_lrio__srv__SaveFiles_Response__init(co_lrio__srv__SaveFiles_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
co_lrio__srv__SaveFiles_Response__fini(co_lrio__srv__SaveFiles_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
co_lrio__srv__SaveFiles_Response__are_equal(const co_lrio__srv__SaveFiles_Response * lhs, const co_lrio__srv__SaveFiles_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
co_lrio__srv__SaveFiles_Response__copy(
  const co_lrio__srv__SaveFiles_Response * input,
  co_lrio__srv__SaveFiles_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

co_lrio__srv__SaveFiles_Response *
co_lrio__srv__SaveFiles_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__srv__SaveFiles_Response * msg = (co_lrio__srv__SaveFiles_Response *)allocator.allocate(sizeof(co_lrio__srv__SaveFiles_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(co_lrio__srv__SaveFiles_Response));
  bool success = co_lrio__srv__SaveFiles_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
co_lrio__srv__SaveFiles_Response__destroy(co_lrio__srv__SaveFiles_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    co_lrio__srv__SaveFiles_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
co_lrio__srv__SaveFiles_Response__Sequence__init(co_lrio__srv__SaveFiles_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__srv__SaveFiles_Response * data = NULL;

  if (size) {
    data = (co_lrio__srv__SaveFiles_Response *)allocator.zero_allocate(size, sizeof(co_lrio__srv__SaveFiles_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = co_lrio__srv__SaveFiles_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        co_lrio__srv__SaveFiles_Response__fini(&data[i - 1]);
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
co_lrio__srv__SaveFiles_Response__Sequence__fini(co_lrio__srv__SaveFiles_Response__Sequence * array)
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
      co_lrio__srv__SaveFiles_Response__fini(&array->data[i]);
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

co_lrio__srv__SaveFiles_Response__Sequence *
co_lrio__srv__SaveFiles_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  co_lrio__srv__SaveFiles_Response__Sequence * array = (co_lrio__srv__SaveFiles_Response__Sequence *)allocator.allocate(sizeof(co_lrio__srv__SaveFiles_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = co_lrio__srv__SaveFiles_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
co_lrio__srv__SaveFiles_Response__Sequence__destroy(co_lrio__srv__SaveFiles_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    co_lrio__srv__SaveFiles_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
co_lrio__srv__SaveFiles_Response__Sequence__are_equal(const co_lrio__srv__SaveFiles_Response__Sequence * lhs, const co_lrio__srv__SaveFiles_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!co_lrio__srv__SaveFiles_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
co_lrio__srv__SaveFiles_Response__Sequence__copy(
  const co_lrio__srv__SaveFiles_Response__Sequence * input,
  co_lrio__srv__SaveFiles_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(co_lrio__srv__SaveFiles_Response);
    co_lrio__srv__SaveFiles_Response * data =
      (co_lrio__srv__SaveFiles_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!co_lrio__srv__SaveFiles_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          co_lrio__srv__SaveFiles_Response__fini(&data[i]);
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
    if (!co_lrio__srv__SaveFiles_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
