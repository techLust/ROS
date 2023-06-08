// Generated by gencpp from file ros_test_pkg/add_two_no.msg
// DO NOT EDIT!


#ifndef ROS_TEST_PKG_MESSAGE_ADD_TWO_NO_H
#define ROS_TEST_PKG_MESSAGE_ADD_TWO_NO_H

#include <ros/service_traits.h>


#include <ros_test_pkg/add_two_noRequest.h>
#include <ros_test_pkg/add_two_noResponse.h>


namespace ros_test_pkg
{

struct add_two_no
{

typedef add_two_noRequest Request;
typedef add_two_noResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct add_two_no
} // namespace ros_test_pkg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_test_pkg::add_two_no > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::ros_test_pkg::add_two_no&) { return value(); }
};

template<>
struct DataType< ::ros_test_pkg::add_two_no > {
  static const char* value()
  {
    return "ros_test_pkg/add_two_no";
  }

  static const char* value(const ::ros_test_pkg::add_two_no&) { return value(); }
};


// service_traits::MD5Sum< ::ros_test_pkg::add_two_noRequest> should match
// service_traits::MD5Sum< ::ros_test_pkg::add_two_no >
template<>
struct MD5Sum< ::ros_test_pkg::add_two_noRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_test_pkg::add_two_no >::value();
  }
  static const char* value(const ::ros_test_pkg::add_two_noRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_test_pkg::add_two_noRequest> should match
// service_traits::DataType< ::ros_test_pkg::add_two_no >
template<>
struct DataType< ::ros_test_pkg::add_two_noRequest>
{
  static const char* value()
  {
    return DataType< ::ros_test_pkg::add_two_no >::value();
  }
  static const char* value(const ::ros_test_pkg::add_two_noRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_test_pkg::add_two_noResponse> should match
// service_traits::MD5Sum< ::ros_test_pkg::add_two_no >
template<>
struct MD5Sum< ::ros_test_pkg::add_two_noResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_test_pkg::add_two_no >::value();
  }
  static const char* value(const ::ros_test_pkg::add_two_noResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_test_pkg::add_two_noResponse> should match
// service_traits::DataType< ::ros_test_pkg::add_two_no >
template<>
struct DataType< ::ros_test_pkg::add_two_noResponse>
{
  static const char* value()
  {
    return DataType< ::ros_test_pkg::add_two_no >::value();
  }
  static const char* value(const ::ros_test_pkg::add_two_noResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_TEST_PKG_MESSAGE_ADD_TWO_NO_H