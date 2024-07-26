// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "co_lrio/msg/detail/optimization_response__rosidl_typesupport_introspection_c.h"
#include "co_lrio/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "co_lrio/msg/detail/optimization_response__functions.h"
#include "co_lrio/msg/detail/optimization_response__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose_to`
#include "nav_msgs/msg/odometry.h"
// Member `pose_to`
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_introspection_c.h"
// Member `keyposes`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `keyposes`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  co_lrio__msg__OptimizationResponse__init(message_memory);
}

void OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_fini_function(void * message_memory)
{
  co_lrio__msg__OptimizationResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__OptimizationResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__OptimizationResponse, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__OptimizationResponse, index_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__OptimizationResponse, pose_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_keyposes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__OptimizationResponse, update_keyposes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keyposes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(co_lrio__msg__OptimizationResponse, keyposes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_members = {
  "co_lrio__msg",  // message namespace
  "OptimizationResponse",  // message name
  6,  // number of fields
  sizeof(co_lrio__msg__OptimizationResponse),
  OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_member_array,  // message members
  OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_type_support_handle = {
  0,
  &OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_co_lrio
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, co_lrio, msg, OptimizationResponse)() {
  OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Odometry)();
  OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_type_support_handle.typesupport_identifier) {
    OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OptimizationResponse__rosidl_typesupport_introspection_c__OptimizationResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
