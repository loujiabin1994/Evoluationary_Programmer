#include <ros/ros.h>
#include <mavros_msgs/State.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseStamped.h>
#include <cmath>
#include <math.h>
#include <std_msgs/Float64.h>
#include <std_msgs/String.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/PositionTarget.h>
#include <unistd.h>
#include <vector>
#include <ros/duration.h>
#include <iostream>
#include <string>


#define MAX_LINEAR  1000
#define  1000
float MAX_ANG_VEL = 0.5
float LINEAR_STEP_SIZE = 0.1
ANG_VEL_STEP_SIZE = 0.01

class keyboard_node:
{
    keyboard_node()
}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "iris_0_keyboard");
	ros::NodeHandle gnc_node("iris_0");

}
mavros_msgs::State::ConstPtr msg