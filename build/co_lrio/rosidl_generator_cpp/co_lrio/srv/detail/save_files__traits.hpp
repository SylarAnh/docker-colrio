// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from co_lrio:srv/SaveFiles.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__SRV__DETAIL__SAVE_FILES__TRAITS_HPP_
#define CO_LRIO__SRV__DETAIL__SAVE_FILES__TRAITS_HPP_

#include "co_lrio/srv/detail/save_files__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<co_lrio::srv::SaveFiles_Request>()
{
  return "co_lrio::srv::SaveFiles_Request";
}

template<>
inline const char * name<co_lrio::srv::SaveFiles_Request>()
{
  return "co_lrio/srv/SaveFiles_Request";
}

template<>
struct has_fixed_size<co_lrio::srv::SaveFiles_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<co_lrio::srv::SaveFiles_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<co_lrio::srv::SaveFiles_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<co_lrio::srv::SaveFiles_Response>()
{
  return "co_lrio::srv::SaveFiles_Response";
}

template<>
inline const char * name<co_lrio::srv::SaveFiles_Response>()
{
  return "co_lrio/srv/SaveFiles_Response";
}

template<>
struct has_fixed_size<co_lrio::srv::SaveFiles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<co_lrio::srv::SaveFiles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<co_lrio::srv::SaveFiles_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<co_lrio::srv::SaveFiles>()
{
  return "co_lrio::srv::SaveFiles";
}

template<>
inline const char * name<co_lrio::srv::SaveFiles>()
{
  return "co_lrio/srv/SaveFiles";
}

template<>
struct has_fixed_size<co_lrio::srv::SaveFiles>
  : std::integral_constant<
    bool,
    has_fixed_size<co_lrio::srv::SaveFiles_Request>::value &&
    has_fixed_size<co_lrio::srv::SaveFiles_Response>::value
  >
{
};

template<>
struct has_bounded_size<co_lrio::srv::SaveFiles>
  : std::integral_constant<
    bool,
    has_bounded_size<co_lrio::srv::SaveFiles_Request>::value &&
    has_bounded_size<co_lrio::srv::SaveFiles_Response>::value
  >
{
};

template<>
struct is_service<co_lrio::srv::SaveFiles>
  : std::true_type
{
};

template<>
struct is_service_request<co_lrio::srv::SaveFiles_Request>
  : std::true_type
{
};

template<>
struct is_service_response<co_lrio::srv::SaveFiles_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CO_LRIO__SRV__DETAIL__SAVE_FILES__TRAITS_HPP_
