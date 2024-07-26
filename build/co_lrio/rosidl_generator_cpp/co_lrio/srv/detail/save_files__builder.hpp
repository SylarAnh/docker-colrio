// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from co_lrio:srv/SaveFiles.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__SRV__DETAIL__SAVE_FILES__BUILDER_HPP_
#define CO_LRIO__SRV__DETAIL__SAVE_FILES__BUILDER_HPP_

#include "co_lrio/srv/detail/save_files__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace co_lrio
{

namespace srv
{

namespace builder
{

class Init_SaveFiles_Request_destination
{
public:
  Init_SaveFiles_Request_destination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::co_lrio::srv::SaveFiles_Request destination(::co_lrio::srv::SaveFiles_Request::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return std::move(msg_);
  }

private:
  ::co_lrio::srv::SaveFiles_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::co_lrio::srv::SaveFiles_Request>()
{
  return co_lrio::srv::builder::Init_SaveFiles_Request_destination();
}

}  // namespace co_lrio


namespace co_lrio
{

namespace srv
{

namespace builder
{

class Init_SaveFiles_Response_success
{
public:
  Init_SaveFiles_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::co_lrio::srv::SaveFiles_Response success(::co_lrio::srv::SaveFiles_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::co_lrio::srv::SaveFiles_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::co_lrio::srv::SaveFiles_Response>()
{
  return co_lrio::srv::builder::Init_SaveFiles_Response_success();
}

}  // namespace co_lrio

#endif  // CO_LRIO__SRV__DETAIL__SAVE_FILES__BUILDER_HPP_
