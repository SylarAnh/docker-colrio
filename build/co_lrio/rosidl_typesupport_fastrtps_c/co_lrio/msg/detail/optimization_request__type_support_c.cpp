// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice
#include "co_lrio/msg/detail/optimization_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "co_lrio/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "co_lrio/msg/detail/optimization_request__struct.h"
#include "co_lrio/msg/detail/optimization_request__functions.h"
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

#include "nav_msgs/msg/detail/odometry__functions.h"  // gps_odom, pose_from, pose_to
#include "rosidl_runtime_c/primitives_sequence.h"  // descriptor_vec, distances, other_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // descriptor_vec, distances, other_ids
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // keyframe
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


using _OptimizationRequest__ros_msg_type = co_lrio__msg__OptimizationRequest;

static bool _OptimizationRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationRequest__ros_msg_type * ros_message = static_cast<const _OptimizationRequest__ros_msg_type *>(untyped_ros_message);
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

  // Field name: keyframe
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->keyframe, cdr))
    {
      return false;
    }
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

  // Field name: index_from
  {
    cdr << ros_message->index_from;
  }

  // Field name: pose_from
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose_from, cdr))
    {
      return false;
    }
  }

  // Field name: noise
  {
    cdr << ros_message->noise;
  }

  // Field name: other_ids
  {
    size_t size = ros_message->other_ids.size;
    auto array_ptr = ros_message->other_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: distances
  {
    size_t size = ros_message->distances.size;
    auto array_ptr = ros_message->distances.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: descriptor_vec
  {
    size_t size = ros_message->descriptor_vec.size;
    auto array_ptr = ros_message->descriptor_vec.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gps_valid
  {
    cdr << ros_message->gps_valid;
  }

  // Field name: gps_odom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gps_odom, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OptimizationRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationRequest__ros_msg_type * ros_message = static_cast<_OptimizationRequest__ros_msg_type *>(untyped_ros_message);
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

  // Field name: keyframe
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->keyframe))
    {
      return false;
    }
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

  // Field name: index_from
  {
    cdr >> ros_message->index_from;
  }

  // Field name: pose_from
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose_from))
    {
      return false;
    }
  }

  // Field name: noise
  {
    cdr >> ros_message->noise;
  }

  // Field name: other_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->other_ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->other_ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->other_ids, size)) {
      return "failed to create array for field 'other_ids'";
    }
    auto array_ptr = ros_message->other_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: distances
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->distances.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->distances);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->distances, size)) {
      return "failed to create array for field 'distances'";
    }
    auto array_ptr = ros_message->distances.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: descriptor_vec
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->descriptor_vec.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->descriptor_vec);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->descriptor_vec, size)) {
      return "failed to create array for field 'descriptor_vec'";
    }
    auto array_ptr = ros_message->descriptor_vec.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gps_valid
  {
    cdr >> ros_message->gps_valid;
  }

  // Field name: gps_odom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gps_odom))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t get_serialized_size_co_lrio__msg__OptimizationRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationRequest__ros_msg_type * ros_message = static_cast<const _OptimizationRequest__ros_msg_type *>(untyped_ros_message);
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
  // field.name keyframe

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->keyframe), current_alignment);
  // field.name index_to
  {
    size_t item_size = sizeof(ros_message->index_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_to

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->pose_to), current_alignment);
  // field.name index_from
  {
    size_t item_size = sizeof(ros_message->index_from);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_from

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->pose_from), current_alignment);
  // field.name noise
  {
    size_t item_size = sizeof(ros_message->noise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name other_ids
  {
    size_t array_size = ros_message->other_ids.size;
    auto array_ptr = ros_message->other_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distances
  {
    size_t array_size = ros_message->distances.size;
    auto array_ptr = ros_message->distances.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name descriptor_vec
  {
    size_t array_size = ros_message->descriptor_vec.size;
    auto array_ptr = ros_message->descriptor_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_valid
  {
    size_t item_size = sizeof(ros_message->gps_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_odom

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->gps_odom), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_co_lrio__msg__OptimizationRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t max_serialized_size_co_lrio__msg__OptimizationRequest(
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

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: keyframe
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
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
  // member: index_from
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pose_from
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Odometry(
        full_bounded, current_alignment);
    }
  }
  // member: noise
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: other_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distances
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: descriptor_vec
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_odom
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Odometry(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OptimizationRequest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_co_lrio__msg__OptimizationRequest(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OptimizationRequest = {
  "co_lrio::msg",
  "OptimizationRequest",
  _OptimizationRequest__cdr_serialize,
  _OptimizationRequest__cdr_deserialize,
  _OptimizationRequest__get_serialized_size,
  _OptimizationRequest__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, msg, OptimizationRequest)() {
  return &_OptimizationRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
