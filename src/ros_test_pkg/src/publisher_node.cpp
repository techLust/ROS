#include "ros/ros.h"
// #include "std_msgs/String.h"
#include "ros_test_pkg/person_data.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "Publisher");
    ros::NodeHandle nh;

    ros::Publisher topic_pub = nh.advertise<ros_test_pkg::person_data>("ros_docker_topic", 1000);
    ros:: Rate loop_rate(1);

    while (ros::ok())
    {
        // std_msgs::String msg;
        ros_test_pkg::person_data person_data;
        // msg.data = "ROS docker publisher is running";
        person_data.name = "Mahatab";
        person_data.age = 25;
        person_data.color = "White";

        //Publish data to topic
        // topic_pub.publish(msg); 
        topic_pub.publish(person_data);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
    
}