// Generated by gencpp from file industrial_extrinsic_cal/manual_triggerActionGoal.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_MANUAL_TRIGGERACTIONGOAL_H
#define INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_MANUAL_TRIGGERACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <industrial_extrinsic_cal/manual_triggerGoal.h>

namespace industrial_extrinsic_cal
{
template <class ContainerAllocator>
struct manual_triggerActionGoal_
{
  typedef manual_triggerActionGoal_<ContainerAllocator> Type;

  manual_triggerActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  manual_triggerActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::industrial_extrinsic_cal::manual_triggerGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct manual_triggerActionGoal_

typedef ::industrial_extrinsic_cal::manual_triggerActionGoal_<std::allocator<void> > manual_triggerActionGoal;

typedef boost::shared_ptr< ::industrial_extrinsic_cal::manual_triggerActionGoal > manual_triggerActionGoalPtr;
typedef boost::shared_ptr< ::industrial_extrinsic_cal::manual_triggerActionGoal const> manual_triggerActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_extrinsic_cal

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'industrial_extrinsic_cal': ['/home/casch/yumi_ws/devel/share/industrial_extrinsic_cal/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "231b1cb226ae32bb7a2ef67370c796eb";
  }

  static const char* value(const ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x231b1cb226ae32bbULL;
  static const uint64_t static_value2 = 0x7a2ef67370c796ebULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_extrinsic_cal/manual_triggerActionGoal";
  }

  static const char* value(const ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
manual_triggerGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: industrial_extrinsic_cal/manual_triggerGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
string display_message  # Specify which message displayed to user\n\
";
  }

  static const char* value(const ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct manual_triggerActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_extrinsic_cal::manual_triggerActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::industrial_extrinsic_cal::manual_triggerGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_MANUAL_TRIGGERACTIONGOAL_H
