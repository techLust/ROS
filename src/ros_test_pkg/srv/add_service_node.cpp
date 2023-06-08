#include "ros/ros.h"
#include "ros_test_pkg/add_two_no.h"

bool addTwoNo(ros_test_pkg::add_two_no::Request &req, ros_test_pkg::add_two_no::Response &res){
    res.sum = req.a + req.b;
    return true;
}

int main(int argc, char **argv){
    ros::init(argc, argv, "Service_Node");
    ros::NodeHandle nh;

    //It takes two parameter name, callback function
    ros::ServiceServer addService = nh.advertiseService("add_two_ints", addTwoNo);

    ros::spin();

    return 0;
}