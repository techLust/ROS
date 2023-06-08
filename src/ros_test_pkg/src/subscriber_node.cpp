#include "ros/ros.h"
// #include "std_msgs/String.h"
#include "ros_test_pkg/person_data.h"


// void writeMsgToRobot(const std_msgs::String::ConstPtr& msg) {
//     ROS_INFO("The message we receive is: %s", msg->data.c_str());
// }

void writeMsgToRobot(const ros_test_pkg::person_data &person_data) {
    ROS_INFO("Name: %s", person_data.name.c_str());
    ROS_INFO("Age: %i", person_data.age);
    ROS_INFO("Favourite color: %s", person_data.color.c_str());
    ROS_INFO("_________________________________________________");
}

int main(int argc, char **argv){
    //Initialize subscriber node
    ros::init(argc, argv, "Subscriber");
    ros:: NodeHandle nh;

    ros::Subscriber topic_sub = nh.subscribe("ros_docker_topic", 1000, writeMsgToRobot);

    ros::spin();
}