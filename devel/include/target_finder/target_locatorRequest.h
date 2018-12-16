// Generated by gencpp from file target_finder/target_locatorRequest.msg
// DO NOT EDIT!


#ifndef TARGET_FINDER_MESSAGE_TARGET_LOCATORREQUEST_H
#define TARGET_FINDER_MESSAGE_TARGET_LOCATORREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/RegionOfInterest.h>
#include <geometry_msgs/Pose.h>

namespace target_finder
{
template <class ContainerAllocator>
struct target_locatorRequest_
{
  typedef target_locatorRequest_<ContainerAllocator> Type;

  target_locatorRequest_()
    : allowable_cost_per_observation(0.0)
    , roi()
    , initial_pose()  {
    }
  target_locatorRequest_(const ContainerAllocator& _alloc)
    : allowable_cost_per_observation(0.0)
    , roi(_alloc)
    , initial_pose(_alloc)  {
  (void)_alloc;
    }



   typedef double _allowable_cost_per_observation_type;
  _allowable_cost_per_observation_type allowable_cost_per_observation;

   typedef  ::sensor_msgs::RegionOfInterest_<ContainerAllocator>  _roi_type;
  _roi_type roi;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _initial_pose_type;
  _initial_pose_type initial_pose;





  typedef boost::shared_ptr< ::target_finder::target_locatorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::target_finder::target_locatorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct target_locatorRequest_

typedef ::target_finder::target_locatorRequest_<std::allocator<void> > target_locatorRequest;

typedef boost::shared_ptr< ::target_finder::target_locatorRequest > target_locatorRequestPtr;
typedef boost::shared_ptr< ::target_finder::target_locatorRequest const> target_locatorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::target_finder::target_locatorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::target_finder::target_locatorRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::target_finder::target_locatorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::target_finder::target_locatorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::target_finder::target_locatorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::target_finder::target_locatorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::target_finder::target_locatorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::target_finder::target_locatorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::target_finder::target_locatorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9d630a50dd674a19af5e228156e7da70";
  }

  static const char* value(const ::target_finder::target_locatorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9d630a50dd674a19ULL;
  static const uint64_t static_value2 = 0xaf5e228156e7da70ULL;
};

template<class ContainerAllocator>
struct DataType< ::target_finder::target_locatorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "target_finder/target_locatorRequest";
  }

  static const char* value(const ::target_finder::target_locatorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::target_finder::target_locatorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 allowable_cost_per_observation\n\
sensor_msgs/RegionOfInterest roi\n\
geometry_msgs/Pose initial_pose\n\
\n\
================================================================================\n\
MSG: sensor_msgs/RegionOfInterest\n\
# This message is used to specify a region of interest within an image.\n\
#\n\
# When used to specify the ROI setting of the camera when the image was\n\
# taken, the height and width fields should either match the height and\n\
# width fields for the associated image; or height = width = 0\n\
# indicates that the full resolution image was captured.\n\
\n\
uint32 x_offset  # Leftmost pixel of the ROI\n\
                 # (0 if the ROI includes the left edge of the image)\n\
uint32 y_offset  # Topmost pixel of the ROI\n\
                 # (0 if the ROI includes the top edge of the image)\n\
uint32 height    # Height of ROI\n\
uint32 width     # Width of ROI\n\
\n\
# True if a distinct rectified ROI should be calculated from the \"raw\"\n\
# ROI in this message. Typically this should be False if the full image\n\
# is captured (ROI not used), and True if a subwindow is captured (ROI\n\
# used).\n\
bool do_rectify\n\
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

  static const char* value(const ::target_finder::target_locatorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::target_finder::target_locatorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.allowable_cost_per_observation);
      stream.next(m.roi);
      stream.next(m.initial_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct target_locatorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::target_finder::target_locatorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::target_finder::target_locatorRequest_<ContainerAllocator>& v)
  {
    s << indent << "allowable_cost_per_observation: ";
    Printer<double>::stream(s, indent + "  ", v.allowable_cost_per_observation);
    s << indent << "roi: ";
    s << std::endl;
    Printer< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> >::stream(s, indent + "  ", v.roi);
    s << indent << "initial_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.initial_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TARGET_FINDER_MESSAGE_TARGET_LOCATORREQUEST_H
