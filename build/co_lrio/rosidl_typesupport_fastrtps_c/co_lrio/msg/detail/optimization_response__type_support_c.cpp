// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice
#include "co_lrio/msg/detail/optimization_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "co_lrio/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "co_lrio/msg/detail/optimization_response__struct.h"
#include "co_lrio/msg/detail/optimization_response__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "nav_msgs/msg/detail/odometry__functions.h"  // pose_to
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // keyposes
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
size_t get_serialized_size_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
size_t max_serialized_size_nav_msgs__msg__Odometry(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_co_lrio
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _OptimizationResponse__ros_msg_type = co_lrio__msg__OptimizationResponse;

static bool _OptimizationResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationResponse__ros_msg_type * ros_message = static_cast<const _OptimizationResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: index_to
  {
    cdr << ros_message->index_to;
  }

  // Field name: pose_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose_to, cdr))
    {
      return false;
    }
  }

  // Field name: update_keyposes
  {
    cdr << (ros_message->update_keyposes ? true : false);
  }

  // Field name: keyposes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->keyposes, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OptimizationResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationResponse__ros_msg_type * ros_message = static_cast<_OptimizationResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: index_to
  {
    cdr >> ros_message->index_to;
  }

  // Field name: pose_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose_to))
    {
      return false;
    }
  }

  // Field name: update_keyposes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->update_keyposes = tmp ? true : false;
  }

  // Field name: keyposes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->keyposes))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t get_serialized_size_co_lrio__msg__OptimizationResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationResponse__ros_msg_type * ros_message = static_cast<const _OptimizationResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name index_to
  {
    size_t item_size = sizeof(ros_message->index_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_to

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->pose_to), current_alignment);
  // field.name update_keyposes
  {
    size_t item_size = sizeof(ros_message->update_keyposes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keyposes

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->keyposes), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_co_lrio__msg__OptimizationResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t max_serialized_size_co_lrio__msg__OptimizationResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: index_to
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pose_to
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Odometry(
        full_bounded, current_alignment);
    }
  }
  // member: update_keyposes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: keyposes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OptimizationResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_co_lrio__msg__OptimizationResponse(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OptimizationResponse = {
  "co_lrio::msg",
  "OptimizationResponse",
  _OptimizationResponse__cdr_serialize,
  _OptimizationResponse__cdr_deserialize,
  _OptimizationResponse__get_serialized_size,
  _OptimizationResponse__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, msg, OptimizationResponse)() {
  return &_OptimizationResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
