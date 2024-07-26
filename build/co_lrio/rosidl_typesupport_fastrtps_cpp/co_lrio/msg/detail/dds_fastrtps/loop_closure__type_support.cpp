// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice
#include "co_lrio/msg/detail/loop_closure__rosidl_typesupport_fastrtps_cpp.hpp"
#include "co_lrio/msg/detail/loop_closure__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::PointCloud2 &);
size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloud2(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace co_lrio
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
cdr_serialize(
  const co_lrio::msg::LoopClosure & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: robot0
  cdr << ros_message.robot0;
  // Member: key0
  cdr << ros_message.key0;
  // Member: robot1
  cdr << ros_message.robot1;
  // Member: key1
  cdr << ros_message.key1;
  // Member: yaw_diff
  cdr << ros_message.yaw_diff;
  // Member: frame
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.frame,
    cdr);
  // Member: noise
  cdr << ros_message.noise;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  co_lrio::msg::LoopClosure & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: robot0
  cdr >> ros_message.robot0;

  // Member: key0
  cdr >> ros_message.key0;

  // Member: robot1
  cdr >> ros_message.robot1;

  // Member: key1
  cdr >> ros_message.key1;

  // Member: yaw_diff
  cdr >> ros_message.yaw_diff;

  // Member: frame
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.frame);

  // Member: noise
  cdr >> ros_message.noise;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
get_serialized_size(
  const co_lrio::msg::LoopClosure & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: robot0
  {
    size_t item_size = sizeof(ros_message.robot0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key0
  {
    size_t item_size = sizeof(ros_message.key0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot1
  {
    size_t item_size = sizeof(ros_message.robot1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key1
  {
    size_t item_size = sizeof(ros_message.key1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_diff
  {
    size_t item_size = sizeof(ros_message.yaw_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frame

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.frame, current_alignment);
  // Member: noise
  {
    size_t item_size = sizeof(ros_message.noise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
max_serialized_size_LoopClosure(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: robot0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_diff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: frame
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        full_bounded, current_alignment);
    }
  }

  // Member: noise
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LoopClosure__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const co_lrio::msg::LoopClosure *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoopClosure__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<co_lrio::msg::LoopClosure *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LoopClosure__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const co_lrio::msg::LoopClosure *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LoopClosure__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LoopClosure(full_bounded, 0);
}

static message_type_support_callbacks_t _LoopClosure__callbacks = {
  "co_lrio::msg",
  "LoopClosure",
  _LoopClosure__cdr_serialize,
  _LoopClosure__cdr_deserialize,
  _LoopClosure__get_serialized_size,
  _LoopClosure__max_serialized_size
};

static rosidl_message_type_support_t _LoopClosure__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LoopClosure__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace co_lrio

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_co_lrio
const rosidl_message_type_support_t *
get_message_type_support_handle<co_lrio::msg::LoopClosure>()
{
  return &co_lrio::msg::typesupport_fastrtps_cpp::_LoopClosure__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, co_lrio, msg, LoopClosure)() {
  return &co_lrio::msg::typesupport_fastrtps_cpp::_LoopClosure__handle;
}

#ifdef __cplusplus
}
#endif
