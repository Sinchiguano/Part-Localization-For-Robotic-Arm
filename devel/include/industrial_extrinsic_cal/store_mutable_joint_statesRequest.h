// Generated by gencpp from file industrial_extrinsic_cal/store_mutable_joint_statesRequest.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_STORE_MUTABLE_JOINT_STATESREQUEST_H
#define INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_STORE_MUTABLE_JOINT_STATESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Empty.h>

namespace industrial_extrinsic_cal
{
template <class ContainerAllocator>
struct store_mutable_joint_statesRequest_
{
  typedef store_mutable_joint_statesRequest_<ContainerAllocator> Type;

  store_mutable_joint_statesRequest_()
    : empty()  {
    }
  store_mutable_joint_statesRequest_(const ContainerAllocator& _alloc)
    : empty(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Empty_<ContainerAllocator>  _empty_type;
  _empty_type empty;





  typedef boost::shared_ptr< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct store_mutable_joint_statesRequest_

typedef ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<std::allocator<void> > store_mutable_joint_statesRequest;

typedef boost::shared_ptr< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest > store_mutable_joint_statesRequestPtr;
typedef boost::shared_ptr< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest const> store_mutable_joint_statesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_extrinsic_cal

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'industrial_extrinsic_cal': ['/home/casch/yumi_ws/devel/share/industrial_extrinsic_cal/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6aac6c697d5414bc0fcede8c33981d0e";
  }

  static const char* value(const ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6aac6c697d5414bcULL;
  static const uint64_t static_value2 = 0x0fcede8c33981d0eULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_extrinsic_cal/store_mutable_joint_statesRequest";
  }

  static const char* value(const ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Empty empty\n\
\n\
================================================================================\n\
MSG: std_msgs/Empty\n\
";
  }

  static const char* value(const ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.empty);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct store_mutable_joint_statesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_extrinsic_cal::store_mutable_joint_statesRequest_<ContainerAllocator>& v)
  {
    s << indent << "empty: ";
    s << std::endl;
    Printer< ::std_msgs::Empty_<ContainerAllocator> >::stream(s, indent + "  ", v.empty);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_STORE_MUTABLE_JOINT_STATESREQUEST_H
