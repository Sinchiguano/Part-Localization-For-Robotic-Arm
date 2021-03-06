// Generated by gencpp from file robo_cylinder/MovePulses.msg
// DO NOT EDIT!


#ifndef ROBO_CYLINDER_MESSAGE_MOVEPULSES_H
#define ROBO_CYLINDER_MESSAGE_MOVEPULSES_H

#include <ros/service_traits.h>


#include <robo_cylinder/MovePulsesRequest.h>
#include <robo_cylinder/MovePulsesResponse.h>


namespace robo_cylinder
{

struct MovePulses
{

typedef MovePulsesRequest Request;
typedef MovePulsesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MovePulses
} // namespace robo_cylinder


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robo_cylinder::MovePulses > {
  static const char* value()
  {
    return "2312ac85d9c04ace4203b83d46d0f0a8";
  }

  static const char* value(const ::robo_cylinder::MovePulses&) { return value(); }
};

template<>
struct DataType< ::robo_cylinder::MovePulses > {
  static const char* value()
  {
    return "robo_cylinder/MovePulses";
  }

  static const char* value(const ::robo_cylinder::MovePulses&) { return value(); }
};


// service_traits::MD5Sum< ::robo_cylinder::MovePulsesRequest> should match 
// service_traits::MD5Sum< ::robo_cylinder::MovePulses > 
template<>
struct MD5Sum< ::robo_cylinder::MovePulsesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robo_cylinder::MovePulses >::value();
  }
  static const char* value(const ::robo_cylinder::MovePulsesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robo_cylinder::MovePulsesRequest> should match 
// service_traits::DataType< ::robo_cylinder::MovePulses > 
template<>
struct DataType< ::robo_cylinder::MovePulsesRequest>
{
  static const char* value()
  {
    return DataType< ::robo_cylinder::MovePulses >::value();
  }
  static const char* value(const ::robo_cylinder::MovePulsesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robo_cylinder::MovePulsesResponse> should match 
// service_traits::MD5Sum< ::robo_cylinder::MovePulses > 
template<>
struct MD5Sum< ::robo_cylinder::MovePulsesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robo_cylinder::MovePulses >::value();
  }
  static const char* value(const ::robo_cylinder::MovePulsesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robo_cylinder::MovePulsesResponse> should match 
// service_traits::DataType< ::robo_cylinder::MovePulses > 
template<>
struct DataType< ::robo_cylinder::MovePulsesResponse>
{
  static const char* value()
  {
    return DataType< ::robo_cylinder::MovePulses >::value();
  }
  static const char* value(const ::robo_cylinder::MovePulsesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBO_CYLINDER_MESSAGE_MOVEPULSES_H
