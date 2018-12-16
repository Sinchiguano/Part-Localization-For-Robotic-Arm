// Generated by gencpp from file target_finder/stereo_locator.msg
// DO NOT EDIT!


#ifndef TARGET_FINDER_MESSAGE_STEREO_LOCATOR_H
#define TARGET_FINDER_MESSAGE_STEREO_LOCATOR_H

#include <ros/service_traits.h>


#include <target_finder/stereo_locatorRequest.h>
#include <target_finder/stereo_locatorResponse.h>


namespace target_finder
{

struct stereo_locator
{

typedef stereo_locatorRequest Request;
typedef stereo_locatorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct stereo_locator
} // namespace target_finder


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::target_finder::stereo_locator > {
  static const char* value()
  {
    return "6f3a39428e04dd9b7fb7338eb3f220f5";
  }

  static const char* value(const ::target_finder::stereo_locator&) { return value(); }
};

template<>
struct DataType< ::target_finder::stereo_locator > {
  static const char* value()
  {
    return "target_finder/stereo_locator";
  }

  static const char* value(const ::target_finder::stereo_locator&) { return value(); }
};


// service_traits::MD5Sum< ::target_finder::stereo_locatorRequest> should match 
// service_traits::MD5Sum< ::target_finder::stereo_locator > 
template<>
struct MD5Sum< ::target_finder::stereo_locatorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::target_finder::stereo_locator >::value();
  }
  static const char* value(const ::target_finder::stereo_locatorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::target_finder::stereo_locatorRequest> should match 
// service_traits::DataType< ::target_finder::stereo_locator > 
template<>
struct DataType< ::target_finder::stereo_locatorRequest>
{
  static const char* value()
  {
    return DataType< ::target_finder::stereo_locator >::value();
  }
  static const char* value(const ::target_finder::stereo_locatorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::target_finder::stereo_locatorResponse> should match 
// service_traits::MD5Sum< ::target_finder::stereo_locator > 
template<>
struct MD5Sum< ::target_finder::stereo_locatorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::target_finder::stereo_locator >::value();
  }
  static const char* value(const ::target_finder::stereo_locatorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::target_finder::stereo_locatorResponse> should match 
// service_traits::DataType< ::target_finder::stereo_locator > 
template<>
struct DataType< ::target_finder::stereo_locatorResponse>
{
  static const char* value()
  {
    return DataType< ::target_finder::stereo_locator >::value();
  }
  static const char* value(const ::target_finder::stereo_locatorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TARGET_FINDER_MESSAGE_STEREO_LOCATOR_H
