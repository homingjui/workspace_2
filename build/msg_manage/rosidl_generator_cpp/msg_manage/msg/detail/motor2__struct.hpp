// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__MOTOR2__STRUCT_HPP_
#define MSG_MANAGE__MSG__DETAIL__MOTOR2__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_manage__msg__Motor2 __attribute__((deprecated))
#else
# define DEPRECATED__msg_manage__msg__Motor2 __declspec(deprecated)
#endif

namespace msg_manage
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor2_
{
  using Type = Motor2_<ContainerAllocator>;

  explicit Motor2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_l = 0.0f;
      this->speed_r = 0.0f;
      this->fram_id = 0;
    }
  }

  explicit Motor2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_l = 0.0f;
      this->speed_r = 0.0f;
      this->fram_id = 0;
    }
  }

  // field types and members
  using _speed_l_type =
    float;
  _speed_l_type speed_l;
  using _speed_r_type =
    float;
  _speed_r_type speed_r;
  using _fram_id_type =
    uint16_t;
  _fram_id_type fram_id;

  // setters for named parameter idiom
  Type & set__speed_l(
    const float & _arg)
  {
    this->speed_l = _arg;
    return *this;
  }
  Type & set__speed_r(
    const float & _arg)
  {
    this->speed_r = _arg;
    return *this;
  }
  Type & set__fram_id(
    const uint16_t & _arg)
  {
    this->fram_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_manage::msg::Motor2_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_manage::msg::Motor2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_manage::msg::Motor2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_manage::msg::Motor2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_manage::msg::Motor2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_manage::msg::Motor2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_manage::msg::Motor2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_manage::msg::Motor2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_manage::msg::Motor2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_manage::msg::Motor2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_manage__msg__Motor2
    std::shared_ptr<msg_manage::msg::Motor2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_manage__msg__Motor2
    std::shared_ptr<msg_manage::msg::Motor2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor2_ & other) const
  {
    if (this->speed_l != other.speed_l) {
      return false;
    }
    if (this->speed_r != other.speed_r) {
      return false;
    }
    if (this->fram_id != other.fram_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor2_

// alias to use template instance with default allocator
using Motor2 =
  msg_manage::msg::Motor2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_manage

#endif  // MSG_MANAGE__MSG__DETAIL__MOTOR2__STRUCT_HPP_
