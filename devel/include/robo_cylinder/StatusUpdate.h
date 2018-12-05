// Generated by gencpp from file robo_cylinder/StatusUpdate.msg
// DO NOT EDIT!


#ifndef ROBO_CYLINDER_MESSAGE_STATUSUPDATE_H
#define ROBO_CYLINDER_MESSAGE_STATUSUPDATE_H

#include <ros/service_traits.h>


#include <robo_cylinder/StatusUpdateRequest.h>
#include <robo_cylinder/StatusUpdateResponse.h>


namespace robo_cylinder
{

struct StatusUpdate
{

typedef StatusUpdateRequest Request;
typedef StatusUpdateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StatusUpdate
} // namespace robo_cylinder


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robo_cylinder::StatusUpdate > {
  static const char* value()
  {
    return "003b81baa95ab323fc1ddf3c7d0bee81";
  }

  static const char* value(const ::robo_cylinder::StatusUpdate&) { return value(); }
};

template<>
struct DataType< ::robo_cylinder::StatusUpdate > {
  static const char* value()
  {
    return "robo_cylinder/StatusUpdate";
  }

  static const char* value(const ::robo_cylinder::StatusUpdate&) { return value(); }
};


// service_traits::MD5Sum< ::robo_cylinder::StatusUpdateRequest> should match 
// service_traits::MD5Sum< ::robo_cylinder::StatusUpdate > 
template<>
struct MD5Sum< ::robo_cylinder::StatusUpdateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robo_cylinder::StatusUpdate >::value();
  }
  static const char* value(const ::robo_cylinder::StatusUpdateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robo_cylinder::StatusUpdateRequest> should match 
// service_traits::DataType< ::robo_cylinder::StatusUpdate > 
template<>
struct DataType< ::robo_cylinder::StatusUpdateRequest>
{
  static const char* value()
  {
    return DataType< ::robo_cylinder::StatusUpdate >::value();
  }
  static const char* value(const ::robo_cylinder::StatusUpdateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robo_cylinder::StatusUpdateResponse> should match 
// service_traits::MD5Sum< ::robo_cylinder::StatusUpdate > 
template<>
struct MD5Sum< ::robo_cylinder::StatusUpdateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robo_cylinder::StatusUpdate >::value();
  }
  static const char* value(const ::robo_cylinder::StatusUpdateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robo_cylinder::StatusUpdateResponse> should match 
// service_traits::DataType< ::robo_cylinder::StatusUpdate > 
template<>
struct DataType< ::robo_cylinder::StatusUpdateResponse>
{
  static const char* value()
  {
    return DataType< ::robo_cylinder::StatusUpdate >::value();
  }
  static const char* value(const ::robo_cylinder::StatusUpdateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBO_CYLINDER_MESSAGE_STATUSUPDATE_H
