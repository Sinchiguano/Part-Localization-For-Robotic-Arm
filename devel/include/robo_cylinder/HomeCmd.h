// Generated by gencpp from file robo_cylinder/HomeCmd.msg
// DO NOT EDIT!


#ifndef ROBO_CYLINDER_MESSAGE_HOMECMD_H
#define ROBO_CYLINDER_MESSAGE_HOMECMD_H

#include <ros/service_traits.h>


#include <robo_cylinder/HomeCmdRequest.h>
#include <robo_cylinder/HomeCmdResponse.h>


namespace robo_cylinder
{

struct HomeCmd
{

typedef HomeCmdRequest Request;
typedef HomeCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct HomeCmd
} // namespace robo_cylinder


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robo_cylinder::HomeCmd > {
  static const char* value()
  {
    return "003b81baa95ab323fc1ddf3c7d0bee81";
  }

  static const char* value(const ::robo_cylinder::HomeCmd&) { return value(); }
};

template<>
struct DataType< ::robo_cylinder::HomeCmd > {
  static const char* value()
  {
    return "robo_cylinder/HomeCmd";
  }

  static const char* value(const ::robo_cylinder::HomeCmd&) { return value(); }
};


// service_traits::MD5Sum< ::robo_cylinder::HomeCmdRequest> should match 
// service_traits::MD5Sum< ::robo_cylinder::HomeCmd > 
template<>
struct MD5Sum< ::robo_cylinder::HomeCmdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robo_cylinder::HomeCmd >::value();
  }
  static const char* value(const ::robo_cylinder::HomeCmdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robo_cylinder::HomeCmdRequest> should match 
// service_traits::DataType< ::robo_cylinder::HomeCmd > 
template<>
struct DataType< ::robo_cylinder::HomeCmdRequest>
{
  static const char* value()
  {
    return DataType< ::robo_cylinder::HomeCmd >::value();
  }
  static const char* value(const ::robo_cylinder::HomeCmdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robo_cylinder::HomeCmdResponse> should match 
// service_traits::MD5Sum< ::robo_cylinder::HomeCmd > 
template<>
struct MD5Sum< ::robo_cylinder::HomeCmdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robo_cylinder::HomeCmd >::value();
  }
  static const char* value(const ::robo_cylinder::HomeCmdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robo_cylinder::HomeCmdResponse> should match 
// service_traits::DataType< ::robo_cylinder::HomeCmd > 
template<>
struct DataType< ::robo_cylinder::HomeCmdResponse>
{
  static const char* value()
  {
    return DataType< ::robo_cylinder::HomeCmd >::value();
  }
  static const char* value(const ::robo_cylinder::HomeCmdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBO_CYLINDER_MESSAGE_HOMECMD_H
