// Generated by gencpp from file target_finder/stereo_locatorResponse.msg
// DO NOT EDIT!


#ifndef TARGET_FINDER_MESSAGE_STEREO_LOCATORRESPONSE_H
#define TARGET_FINDER_MESSAGE_STEREO_LOCATORRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace target_finder
{
template <class ContainerAllocator>
struct stereo_locatorResponse_
{
  typedef stereo_locatorResponse_<ContainerAllocator> Type;

  stereo_locatorResponse_()
    : final_cost_per_observation(0.0)
    , target_pose()  {
    }
  stereo_locatorResponse_(const ContainerAllocator& _alloc)
    : final_cost_per_observation(0.0)
    , target_pose(_alloc)  {
  (void)_alloc;
    }



   typedef double _final_cost_per_observation_type;
  _final_cost_per_observation_type final_cost_per_observation;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _target_pose_type;
  _target_pose_type target_pose;





  typedef boost::shared_ptr< ::target_finder::stereo_locatorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::target_finder::stereo_locatorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct stereo_locatorResponse_

typedef ::target_finder::stereo_locatorResponse_<std::allocator<void> > stereo_locatorResponse;

typedef boost::shared_ptr< ::target_finder::stereo_locatorResponse > stereo_locatorResponsePtr;
typedef boost::shared_ptr< ::target_finder::stereo_locatorResponse const> stereo_locatorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::target_finder::stereo_locatorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace target_finder

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::target_finder::stereo_locatorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::target_finder::stereo_locatorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::target_finder::stereo_locatorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "666e1abcd41243317c29d57ff72dde2d";
  }

  static const char* value(const ::target_finder::stereo_locatorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x666e1abcd4124331ULL;
  static const uint64_t static_value2 = 0x7c29d57ff72dde2dULL;
};

template<class ContainerAllocator>
struct DataType< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "target_finder/stereo_locatorResponse";
  }

  static const char* value(const ::target_finder::stereo_locatorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 final_cost_per_observation\n\
geometry_msgs/Pose target_pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::target_finder::stereo_locatorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.final_cost_per_observation);
      stream.next(m.target_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct stereo_locatorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::target_finder::stereo_locatorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::target_finder::stereo_locatorResponse_<ContainerAllocator>& v)
  {
    s << indent << "final_cost_per_observation: ";
    Printer<double>::stream(s, indent + "  ", v.final_cost_per_observation);
    s << indent << "target_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.target_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TARGET_FINDER_MESSAGE_STEREO_LOCATORRESPONSE_H
