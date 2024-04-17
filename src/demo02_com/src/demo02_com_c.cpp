#include "ros/ros.h"
#include "std_msgs/String.h"

/*
    publisher:
    1. include the header file
    2. initialize ROS node
    3. create node handle
    4. create instance of publisher
    5. logic for publishing messages

*/

int main(int argc, char*argv[]){
    ros::init(argc,argv, "erGouZi");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("fang",10);
    // messages to send after
    std_msgs::String msg;
    while(ros::ok()){
        msg.data="hello sent from c";
        pub.publish(msg);
    }
    return 0;
}