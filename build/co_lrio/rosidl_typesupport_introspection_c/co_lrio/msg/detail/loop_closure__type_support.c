// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "co_lrio/msg/detail/loop_closure__rosidl_typesupport_introspection_c.h"
#include "co_lrio/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "co_lrio/msg/detail/loop_closure__functions.h"
#include "co_lrio/msg/detail/loop_closure__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `frame`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `frame`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  co_lrio__msg__LoopClosure__init(message_memory);
}

void LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_fini_function(void * message_memory)
{
  co_lrio__msg__LoopClosure__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, robot0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, key0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, robot1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, key1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_diff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, yaw_diff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__LoopClosure, noise),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_members = {
  "co_lrio__msg",  // message namespace
  "LoopClosure",  // message name
  8,  // number of fields
  sizeof(co_lrio__msg__LoopClosure),
  LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_member_array,  // message members
  LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_init_function,  // function to initialize message memory (memory has to be allocated)
  LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_type_support_handle = {
  0,
  &LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_co_lrio
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, co_lrio, msg, LoopClosure)() {
  LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_type_support_handle.typesupport_identifier) {
    LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LoopClosure__rosidl_typesupport_introspection_c__LoopClosure_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
