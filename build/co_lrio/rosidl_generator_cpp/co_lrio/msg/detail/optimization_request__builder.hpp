// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from co_lrio:msg/OptimizationRequest.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__BUILDER_HPP_
#define CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__BUILDER_HPP_

#include "co_lrio/msg/detail/optimization_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace co_lrio
{

namespace msg
{

namespace builder
{

class Init_OptimizationRequest_gps_odom
{
public:
  explicit Init_OptimizationRequest_gps_odom(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  ::co_lrio::msg::OptimizationRequest gps_odom(::co_lrio::msg::OptimizationRequest::_gps_odom_type arg)
  {
    msg_.gps_odom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_gps_valid
{
public:
  explicit Init_OptimizationRequest_gps_valid(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_gps_odom gps_valid(::co_lrio::msg::OptimizationRequest::_gps_valid_type arg)
  {
    msg_.gps_valid = std::move(arg);
    return Init_OptimizationRequest_gps_odom(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_descriptor_vec
{
public:
  explicit Init_OptimizationRequest_descriptor_vec(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_gps_valid descriptor_vec(::co_lrio::msg::OptimizationRequest::_descriptor_vec_type arg)
  {
    msg_.descriptor_vec = std::move(arg);
    return Init_OptimizationRequest_gps_valid(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_distances
{
public:
  explicit Init_OptimizationRequest_distances(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_descriptor_vec distances(::co_lrio::msg::OptimizationRequest::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return Init_OptimizationRequest_descriptor_vec(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_other_ids
{
public:
  explicit Init_OptimizationRequest_other_ids(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_distances other_ids(::co_lrio::msg::OptimizationRequest::_other_ids_type arg)
  {
    msg_.other_ids = std::move(arg);
    return Init_OptimizationRequest_distances(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_noise
{
public:
  explicit Init_OptimizationRequest_noise(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_other_ids noise(::co_lrio::msg::OptimizationRequest::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_OptimizationRequest_other_ids(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_pose_from
{
public:
  explicit Init_OptimizationRequest_pose_from(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_noise pose_from(::co_lrio::msg::OptimizationRequest::_pose_from_type arg)
  {
    msg_.pose_from = std::move(arg);
    return Init_OptimizationRequest_noise(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_index_from
{
public:
  explicit Init_OptimizationRequest_index_from(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_pose_from index_from(::co_lrio::msg::OptimizationRequest::_index_from_type arg)
  {
    msg_.index_from = std::move(arg);
    return Init_OptimizationRequest_pose_from(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_pose_to
{
public:
  explicit Init_OptimizationRequest_pose_to(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_index_from pose_to(::co_lrio::msg::OptimizationRequest::_pose_to_type arg)
  {
    msg_.pose_to = std::move(arg);
    return Init_OptimizationRequest_index_from(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_index_to
{
public:
  explicit Init_OptimizationRequest_index_to(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_pose_to index_to(::co_lrio::msg::OptimizationRequest::_index_to_type arg)
  {
    msg_.index_to = std::move(arg);
    return Init_OptimizationRequest_pose_to(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_keyframe
{
public:
  explicit Init_OptimizationRequest_keyframe(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_index_to keyframe(::co_lrio::msg::OptimizationRequest::_keyframe_type arg)
  {
    msg_.keyframe = std::move(arg);
    return Init_OptimizationRequest_index_to(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_robot_id
{
public:
  explicit Init_OptimizationRequest_robot_id(::co_lrio::msg::OptimizationRequest & msg)
  : msg_(msg)
  {}
  Init_OptimizationRequest_keyframe robot_id(::co_lrio::msg::OptimizationRequest::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_OptimizationRequest_keyframe(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

class Init_OptimizationRequest_header
{
public:
  Init_OptimizationRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizationRequest_robot_id header(::co_lrio::msg::OptimizationRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OptimizationRequest_robot_id(msg_);
  }

private:
  ::co_lrio::msg::OptimizationRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::co_lrio::msg::OptimizationRequest>()
{
  return co_lrio::msg::builder::Init_OptimizationRequest_header();
}

}  // namespace co_lrio

#endif  // CO_LRIO__MSG__DETAIL__OPTIMIZATION_REQUEST__BUILDER_HPP_
