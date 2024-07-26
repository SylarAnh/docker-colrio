// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from co_lrio:srv/SaveFiles.idl
// generated code does not contain a copyright notice
#include "co_lrio/srv/detail/save_files__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "co_lrio/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "co_lrio/srv/detail/save_files__struct.h"
#include "co_lrio/srv/detail/save_files__functions.h"
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

#include "rosidl_runtime_c/string.h"  // destination
#include "rosidl_runtime_c/string_functions.h"  // destination

// forward declare type support functions


using _SaveFiles_Request__ros_msg_type = co_lrio__srv__SaveFiles_Request;

static bool _SaveFiles_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveFiles_Request__ros_msg_type * ros_message = static_cast<const _SaveFiles_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: destination
  {
    const rosidl_runtime_c__String * str = &ros_message->destination;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SaveFiles_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveFiles_Request__ros_msg_type * ros_message = static_cast<_SaveFiles_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: destination
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->destination.data) {
      rosidl_runtime_c__String__init(&ros_message->destination);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->destination,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'destination'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t get_serialized_size_co_lrio__srv__SaveFiles_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveFiles_Request__ros_msg_type * ros_message = static_cast<const _SaveFiles_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name destination
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->destination.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SaveFiles_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_co_lrio__srv__SaveFiles_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t max_serialized_size_co_lrio__srv__SaveFiles_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: destination
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveFiles_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_co_lrio__srv__SaveFiles_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveFiles_Request = {
  "co_lrio::srv",
  "SaveFiles_Request",
  _SaveFiles_Request__cdr_serialize,
  _SaveFiles_Request__cdr_deserialize,
  _SaveFiles_Request__get_serialized_size,
  _SaveFiles_Request__max_serialized_size
};

static rosidl_message_type_support_t _SaveFiles_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveFiles_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, srv, SaveFiles_Request)() {
  return &_SaveFiles_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "co_lrio/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "co_lrio/srv/detail/save_files__struct.h"
// already included above
// #include "co_lrio/srv/detail/save_files__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _SaveFiles_Response__ros_msg_type = co_lrio__srv__SaveFiles_Response;

static bool _SaveFiles_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveFiles_Response__ros_msg_type * ros_message = static_cast<const _SaveFiles_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SaveFiles_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveFiles_Response__ros_msg_type * ros_message = static_cast<_SaveFiles_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t get_serialized_size_co_lrio__srv__SaveFiles_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveFiles_Response__ros_msg_type * ros_message = static_cast<const _SaveFiles_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveFiles_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_co_lrio__srv__SaveFiles_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_co_lrio
size_t max_serialized_size_co_lrio__srv__SaveFiles_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveFiles_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_co_lrio__srv__SaveFiles_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveFiles_Response = {
  "co_lrio::srv",
  "SaveFiles_Response",
  _SaveFiles_Response__cdr_serialize,
  _SaveFiles_Response__cdr_deserialize,
  _SaveFiles_Response__get_serialized_size,
  _SaveFiles_Response__max_serialized_size
};

static rosidl_message_type_support_t _SaveFiles_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveFiles_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, srv, SaveFiles_Response)() {
  return &_SaveFiles_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "co_lrio/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "co_lrio/srv/save_files.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SaveFiles__callbacks = {
  "co_lrio::srv",
  "SaveFiles",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, srv, SaveFiles_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, srv, SaveFiles_Response)(),
};

static rosidl_service_type_support_t SaveFiles__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SaveFiles__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, co_lrio, srv, SaveFiles)() {
  return &SaveFiles__handle;
}

#if defined(__cplusplus)
}
#endif
