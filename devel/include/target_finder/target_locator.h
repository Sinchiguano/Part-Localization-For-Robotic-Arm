// Generated by gencpp from file target_finder/target_locator.msg
// DO NOT EDIT!


#ifndef TARGET_FINDER_MESSAGE_TARGET_LOCATOR_H
#define TARGET_FINDER_MESSAGE_TARGET_LOCATOR_H

#include <ros/service_traits.h>


#include <target_finder/target_locatorRequest.h>
#include <target_finder/target_locatorResponse.h>


namespace target_finder
{

struct target_locator
{

typedef target_locatorRequest Request;
typedef target_locatorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct target_locator
} // namespace target_finder


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::target_finder::target_locator > {
  static const char* value()
  {
    return "a26351e216e367a0883873c29f854fe0";
  }

  static const char* value(const ::target_finder::target_locator&) { return value(); }
};

template<>
struct DataType< ::target_finder::target_locator > {
  static const char* value()
  {
    return "target_finder/target_locator";
  }

  static const char* value(const ::target_finder::target_locator&) { return value(); }
};


// service_traits::MD5Sum< ::target_finder::target_locatorRequest> should match 
// service_traits::MD5Sum< ::target_finder::target_locator > 
template<>
struct MD5Sum< ::target_finder::target_locatorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::target_finder::target_locator >::value();
  }
  static const char* value(const ::target_finder::target_locatorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::target_finder::target_locatorRequest> should match 
// service_traits::DataType< ::target_finder::target_locator > 
template<>
struct DataType< ::target_finder::target_locatorRequest>
{
  static const char* value()
  {
    return DataType< ::target_finder::target_locator >::value();
  }
  static const char* value(const ::target_finder::target_locatorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::target_finder::target_locatorResponse> should match 
// service_traits::MD5Sum< ::target_finder::target_locator > 
template<>
struct MD5Sum< ::target_finder::target_locatorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::target_finder::target_locator >::value();
  }
  static const char* value(const ::target_finder::target_locatorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::target_finder::target_locatorResponse> should match 
// service_traits::DataType< ::target_finder::target_locator > 
template<>
struct DataType< ::target_finder::target_locatorResponse>
{
  static const char* value()
  {
    return DataType< ::target_finder::target_locator >::value();
  }
  static const char* value(const ::target_finder::target_locatorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TARGET_FINDER_MESSAGE_TARGET_LOCATOR_H
