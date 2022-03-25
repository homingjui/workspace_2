// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_manage:action/Testaction.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__ACTION__DETAIL__TESTACTION__BUILDER_HPP_
#define MSG_MANAGE__ACTION__DETAIL__TESTACTION__BUILDER_HPP_

#include "msg_manage/action/detail/testaction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_Goal_order
{
public:
  Init_Testaction_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_manage::action::Testaction_Goal order(::msg_manage::action::Testaction_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_Goal>()
{
  return msg_manage::action::builder::Init_Testaction_Goal_order();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_Result_sequence
{
public:
  Init_Testaction_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_manage::action::Testaction_Result sequence(::msg_manage::action::Testaction_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_Result>()
{
  return msg_manage::action::builder::Init_Testaction_Result_sequence();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_Feedback_partial_sequence
{
public:
  Init_Testaction_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_manage::action::Testaction_Feedback partial_sequence(::msg_manage::action::Testaction_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_Feedback>()
{
  return msg_manage::action::builder::Init_Testaction_Feedback_partial_sequence();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_SendGoal_Request_goal
{
public:
  explicit Init_Testaction_SendGoal_Request_goal(::msg_manage::action::Testaction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::msg_manage::action::Testaction_SendGoal_Request goal(::msg_manage::action::Testaction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_SendGoal_Request msg_;
};

class Init_Testaction_SendGoal_Request_goal_id
{
public:
  Init_Testaction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Testaction_SendGoal_Request_goal goal_id(::msg_manage::action::Testaction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Testaction_SendGoal_Request_goal(msg_);
  }

private:
  ::msg_manage::action::Testaction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_SendGoal_Request>()
{
  return msg_manage::action::builder::Init_Testaction_SendGoal_Request_goal_id();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_SendGoal_Response_stamp
{
public:
  explicit Init_Testaction_SendGoal_Response_stamp(::msg_manage::action::Testaction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::msg_manage::action::Testaction_SendGoal_Response stamp(::msg_manage::action::Testaction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_SendGoal_Response msg_;
};

class Init_Testaction_SendGoal_Response_accepted
{
public:
  Init_Testaction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Testaction_SendGoal_Response_stamp accepted(::msg_manage::action::Testaction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Testaction_SendGoal_Response_stamp(msg_);
  }

private:
  ::msg_manage::action::Testaction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_SendGoal_Response>()
{
  return msg_manage::action::builder::Init_Testaction_SendGoal_Response_accepted();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_GetResult_Request_goal_id
{
public:
  Init_Testaction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_manage::action::Testaction_GetResult_Request goal_id(::msg_manage::action::Testaction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_GetResult_Request>()
{
  return msg_manage::action::builder::Init_Testaction_GetResult_Request_goal_id();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_GetResult_Response_result
{
public:
  explicit Init_Testaction_GetResult_Response_result(::msg_manage::action::Testaction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::msg_manage::action::Testaction_GetResult_Response result(::msg_manage::action::Testaction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_GetResult_Response msg_;
};

class Init_Testaction_GetResult_Response_status
{
public:
  Init_Testaction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Testaction_GetResult_Response_result status(::msg_manage::action::Testaction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Testaction_GetResult_Response_result(msg_);
  }

private:
  ::msg_manage::action::Testaction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_GetResult_Response>()
{
  return msg_manage::action::builder::Init_Testaction_GetResult_Response_status();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace action
{

namespace builder
{

class Init_Testaction_FeedbackMessage_feedback
{
public:
  explicit Init_Testaction_FeedbackMessage_feedback(::msg_manage::action::Testaction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::msg_manage::action::Testaction_FeedbackMessage feedback(::msg_manage::action::Testaction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::action::Testaction_FeedbackMessage msg_;
};

class Init_Testaction_FeedbackMessage_goal_id
{
public:
  Init_Testaction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Testaction_FeedbackMessage_feedback goal_id(::msg_manage::action::Testaction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Testaction_FeedbackMessage_feedback(msg_);
  }

private:
  ::msg_manage::action::Testaction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::action::Testaction_FeedbackMessage>()
{
  return msg_manage::action::builder::Init_Testaction_FeedbackMessage_goal_id();
}

}  // namespace msg_manage

#endif  // MSG_MANAGE__ACTION__DETAIL__TESTACTION__BUILDER_HPP_
