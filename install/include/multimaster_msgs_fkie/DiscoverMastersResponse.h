// Generated by gencpp from file multimaster_msgs_fkie/DiscoverMastersResponse.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_DISCOVERMASTERSRESPONSE_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_DISCOVERMASTERSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <multimaster_msgs_fkie/ROSMaster.h>

namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct DiscoverMastersResponse_
{
  typedef DiscoverMastersResponse_<ContainerAllocator> Type;

  DiscoverMastersResponse_()
    : masters()  {
    }
  DiscoverMastersResponse_(const ContainerAllocator& _alloc)
    : masters(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::multimaster_msgs_fkie::ROSMaster_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::multimaster_msgs_fkie::ROSMaster_<ContainerAllocator> >::other >  _masters_type;
  _masters_type masters;





  typedef boost::shared_ptr< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DiscoverMastersResponse_

typedef ::multimaster_msgs_fkie::DiscoverMastersResponse_<std::allocator<void> > DiscoverMastersResponse;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::DiscoverMastersResponse > DiscoverMastersResponsePtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::DiscoverMastersResponse const> DiscoverMastersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/home/casch/yumi_ws/src/multimaster_fkie/multimaster_msgs_fkie/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc7525cc24dd3b880f044a2cdfb95aad";
  }

  static const char* value(const ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc7525cc24dd3b88ULL;
  static const uint64_t static_value2 = 0x0f044a2cdfb95aadULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/DiscoverMastersResponse";
  }

  static const char* value(const ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/ROSMaster[] masters\n\
\n\
\n\
================================================================================\n\
MSG: multimaster_msgs_fkie/ROSMaster\n\
string name\n\
# ROS Master URI\n\
string uri\n\
# The timestamp of the state of the remoter ROS master\n\
float64 timestamp\n\
# The timestamp of the state of the remoter ROS master, without the changes maked while a synchronization.\n\
float64 timestamp_local\n\
bool online\n\
string discoverer_name\n\
string monitoruri\n\
";
  }

  static const char* value(const ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.masters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DiscoverMastersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::DiscoverMastersResponse_<ContainerAllocator>& v)
  {
    s << indent << "masters[]" << std::endl;
    for (size_t i = 0; i < v.masters.size(); ++i)
    {
      s << indent << "  masters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::multimaster_msgs_fkie::ROSMaster_<ContainerAllocator> >::stream(s, indent + "    ", v.masters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_DISCOVERMASTERSRESPONSE_H
