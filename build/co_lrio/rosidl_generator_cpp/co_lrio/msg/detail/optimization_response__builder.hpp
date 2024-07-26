// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from co_lrio:msg/OptimizationResponse.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__BUILDER_HPP_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__BUILDER_HPP_

#include "co_lrio/msg/detail/optimization_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace co_lrio
{

namespace msg
{

namespace builder
{

class Init_OptimizationResponse_keyposes
{
public:
  explicit Init_OptimizationResponse_keyposes(::co_lrio::msg::OptimizationResponse & msg)
  : msg_(msg)
  {}
  ::co_lrio::msg::OptimizationResponse keyposes(::co_lrio::msg::OptimizationResponse::_keyposes_type arg)
  {
    msg_.keyposes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::co_lrio::msg::OptimizationResponse msg_;
};

class Init_OptimizationResponse_update_keyposes
{
public:
  explicit Init_OptimizationResponse_update_keyposes(::co_lrio::msg::OptimizationResponse & msg)
  : msg_(msg)
  {}
  Init_OptimizationResponse_keyposes update_keyposes(::co_lrio::msg::OptimizationResponse::_update_keyposes_type arg)
  {
    msg_.update_keyposes = std::move(arg);
    return Init_OptimizationResponse_keyposes(msg_);
  }

private:
  ::co_lrio::msg::OptimizationResponse msg_;
};

class Init_OptimizationResponse_pose_to
{
public:
  explicit Init_OptimizationResponse_pose_to(::co_lrio::msg::OptimizationResponse & msg)
  : msg_(msg)
  {}
  Init_OptimizationResponse_update_keyposes pose_to(::co_lrio::msg::OptimizationResponse::_pose_to_type arg)
  {
    msg_.pose_to = std::move(arg);
    return Init_OptimizationResponse_update_keyposes(msg_);
  }

private:
  ::co_lrio::msg::OptimizationResponse msg_;
};

class Init_OptimizationResponse_index_to
{
public:
  explicit Init_OptimizationResponse_index_to(::co_lrio::msg::OptimizationResponse & msg)
  : msg_(msg)
  {}
  Init_OptimizationResponse_pose_to index_to(::co_lrio::msg::OptimizationResponse::_index_to_type arg)
  {
    msg_.index_to = std::move(arg);
    return Init_OptimizationResponse_pose_to(msg_);
  }

private:
  ::co_lrio::msg::OptimizationResponse msg_;
};

class Init_OptimizationResponse_robot_id
{
public:
  explicit Init_OptimizationResponse_robot_id(::co_lrio::msg::OptimizationResponse & msg)
  : msg_(msg)
  {}
  Init_OptimizationResponse_index_to robot_id(::co_lrio::msg::OptimizationResponse::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_OptimizationResponse_index_to(msg_);
  }

private:
  ::co_lrio::msg::OptimizationResponse msg_;
};

class Init_OptimizationResponse_header
{
public:
  Init_OptimizationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizationResponse_robot_id header(::co_lrio::msg::OptimizationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OptimizationResponse_robot_id(msg_);
  }

private:
  ::co_lrio::msg::OptimizationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::co_lrio::msg::OptimizationResponse>()
{
  return co_lrio::msg::builder::Init_OptimizationResponse_header();
}

}  // namespace co_lrio

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_RESPONSE__BUILDER_HPP_
