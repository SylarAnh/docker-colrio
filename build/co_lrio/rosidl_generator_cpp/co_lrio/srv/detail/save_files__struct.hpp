// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from co_lrio:srv/SaveFiles.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__SRV__DETAIL__SAVE_FILES__STRUCT_HPP_
#define CO_LRIO__SRV__DETAIL__SAVE_FILES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__co_lrio__srv__SaveFiles_Request __attribute__((deprecated))
#else
# define DEPRECATED__co_lrio__srv__SaveFiles_Request __declspec(deprecated)
#endif

namespace co_lrio
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveFiles_Request_
{
  using Type = SaveFiles_Request_<ContainerAllocator>;

  explicit SaveFiles_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->destination = "";
    }
  }

  explicit SaveFiles_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : destination(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->destination = "";
    }
  }

  // field types and members
  using _destination_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _destination_type destination;

  // setters for named parameter idiom
  Type & set__destination(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->destination = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    co_lrio::srv::SaveFiles_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const co_lrio::srv::SaveFiles_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      co_lrio::srv::SaveFiles_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      co_lrio::srv::SaveFiles_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__co_lrio__srv__SaveFiles_Request
    std::shared_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__co_lrio__srv__SaveFiles_Request
    std::shared_ptr<co_lrio::srv::SaveFiles_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveFiles_Request_ & other) const
  {
    if (this->destination != other.destination) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveFiles_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveFiles_Request_

// alias to use template instance with default allocator
using SaveFiles_Request =
  co_lrio::srv::SaveFiles_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace co_lrio


#ifndef _WIN32
# define DEPRECATED__co_lrio__srv__SaveFiles_Response __attribute__((deprecated))
#else
# define DEPRECATED__co_lrio__srv__SaveFiles_Response __declspec(deprecated)
#endif

namespace co_lrio
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveFiles_Response_
{
  using Type = SaveFiles_Response_<ContainerAllocator>;

  explicit SaveFiles_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SaveFiles_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    co_lrio::srv::SaveFiles_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const co_lrio::srv::SaveFiles_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      co_lrio::srv::SaveFiles_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      co_lrio::srv::SaveFiles_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__co_lrio__srv__SaveFiles_Response
    std::shared_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__co_lrio__srv__SaveFiles_Response
    std::shared_ptr<co_lrio::srv::SaveFiles_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveFiles_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveFiles_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveFiles_Response_

// alias to use template instance with default allocator
using SaveFiles_Response =
  co_lrio::srv::SaveFiles_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace co_lrio

namespace co_lrio
{

namespace srv
{

struct SaveFiles
{
  using Request = co_lrio::srv::SaveFiles_Request;
  using Response = co_lrio::srv::SaveFiles_Response;
};

}  // namespace srv

}  // namespace co_lrio

#endif  // CO_LRIO__SRV__DETAIL__SAVE_FILES__STRUCT_HPP_
