// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__BUILDER_HPP_
#define CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__BUILDER_HPP_

#include "co_lrio/msg/detail/loop_closure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace co_lrio
{

namespace msg
{

namespace builder
{

class Init_LoopClosure_noise
{
public:
  explicit Init_LoopClosure_noise(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  ::co_lrio::msg::LoopClosure noise(::co_lrio::msg::LoopClosure::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return std::move(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_frame
{
public:
  explicit Init_LoopClosure_frame(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  Init_LoopClosure_noise frame(::co_lrio::msg::LoopClosure::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_LoopClosure_noise(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_yaw_diff
{
public:
  explicit Init_LoopClosure_yaw_diff(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  Init_LoopClosure_frame yaw_diff(::co_lrio::msg::LoopClosure::_yaw_diff_type arg)
  {
    msg_.yaw_diff = std::move(arg);
    return Init_LoopClosure_frame(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_key1
{
public:
  explicit Init_LoopClosure_key1(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  Init_LoopClosure_yaw_diff key1(::co_lrio::msg::LoopClosure::_key1_type arg)
  {
    msg_.key1 = std::move(arg);
    return Init_LoopClosure_yaw_diff(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_robot1
{
public:
  explicit Init_LoopClosure_robot1(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  Init_LoopClosure_key1 robot1(::co_lrio::msg::LoopClosure::_robot1_type arg)
  {
    msg_.robot1 = std::move(arg);
    return Init_LoopClosure_key1(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_key0
{
public:
  explicit Init_LoopClosure_key0(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  Init_LoopClosure_robot1 key0(::co_lrio::msg::LoopClosure::_key0_type arg)
  {
    msg_.key0 = std::move(arg);
    return Init_LoopClosure_robot1(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_robot0
{
public:
  explicit Init_LoopClosure_robot0(::co_lrio::msg::LoopClosure & msg)
  : msg_(msg)
  {}
  Init_LoopClosure_key0 robot0(::co_lrio::msg::LoopClosure::_robot0_type arg)
  {
    msg_.robot0 = std::move(arg);
    return Init_LoopClosure_key0(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

class Init_LoopClosure_header
{
public:
  Init_LoopClosure_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoopClosure_robot0 header(::co_lrio::msg::LoopClosure::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoopClosure_robot0(msg_);
  }

private:
  ::co_lrio::msg::LoopClosure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::co_lrio::msg::LoopClosure>()
{
  return co_lrio::msg::builder::Init_LoopClosure_header();
}

}  // namespace co_lrio

#endif  // CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__BUILDER_HPP_
