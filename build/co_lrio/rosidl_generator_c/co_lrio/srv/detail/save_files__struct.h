// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from co_lrio:srv/SaveFiles.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__SRV__DETAIL__SAVE_FILES__STRUCT_H_
#define CO_LRIO__SRV__DETAIL__SAVE_FILES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'destination'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SaveFiles in the package co_lrio.
typedef struct co_lrio__srv__SaveFiles_Request
{
  rosidl_runtime_c__String destination;
} co_lrio__srv__SaveFiles_Request;

// Struct for a sequence of co_lrio__srv__SaveFiles_Request.
typedef struct co_lrio__srv__SaveFiles_Request__Sequence
{
  co_lrio__srv__SaveFiles_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} co_lrio__srv__SaveFiles_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SaveFiles in the package co_lrio.
typedef struct co_lrio__srv__SaveFiles_Response
{
  bool success;
} co_lrio__srv__SaveFiles_Response;

// Struct for a sequence of co_lrio__srv__SaveFiles_Response.
typedef struct co_lrio__srv__SaveFiles_Response__Sequence
{
  co_lrio__srv__SaveFiles_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} co_lrio__srv__SaveFiles_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CO_LRIO__SRV__DETAIL__SAVE_FILES__STRUCT_H_
