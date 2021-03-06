// Generated by gencpp from file intrinsic_cal/rail_ical_runRequest.msg
// DO NOT EDIT!


#ifndef INTRINSIC_CAL_MESSAGE_RAIL_ICAL_RUNREQUEST_H
#define INTRINSIC_CAL_MESSAGE_RAIL_ICAL_RUNREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intrinsic_cal
{
template <class ContainerAllocator>
struct rail_ical_runRequest_
{
  typedef rail_ical_runRequest_<ContainerAllocator> Type;

  rail_ical_runRequest_()
    : allowable_cost_per_observation(0.0)  {
    }
  rail_ical_runRequest_(const ContainerAllocator& _alloc)
    : allowable_cost_per_observation(0.0)  {
  (void)_alloc;
    }



   typedef double _allowable_cost_per_observation_type;
  _allowable_cost_per_observation_type allowable_cost_per_observation;





  typedef boost::shared_ptr< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> const> ConstPtr;

}; // struct rail_ical_runRequest_

typedef ::intrinsic_cal::rail_ical_runRequest_<std::allocator<void> > rail_ical_runRequest;

typedef boost::shared_ptr< ::intrinsic_cal::rail_ical_runRequest > rail_ical_runRequestPtr;
typedef boost::shared_ptr< ::intrinsic_cal::rail_ical_runRequest const> rail_ical_runRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intrinsic_cal

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "018b5c6376abafbce2c3211a0d675d06";
  }

  static const char* value(const ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x018b5c6376abafbcULL;
  static const uint64_t static_value2 = 0xe2c3211a0d675d06ULL;
};

template<class ContainerAllocator>
struct DataType< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intrinsic_cal/rail_ical_runRequest";
  }

  static const char* value(const ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 allowable_cost_per_observation\n\
";
  }

  static const char* value(const ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.allowable_cost_per_observation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rail_ical_runRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intrinsic_cal::rail_ical_runRequest_<ContainerAllocator>& v)
  {
    s << indent << "allowable_cost_per_observation: ";
    Printer<double>::stream(s, indent + "  ", v.allowable_cost_per_observation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTRINSIC_CAL_MESSAGE_RAIL_ICAL_RUNREQUEST_H
