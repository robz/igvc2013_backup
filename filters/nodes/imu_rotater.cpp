#include "ros/ros.h"
#include "ocean_server_imu/RawData.h"
#include "filters/RotatedIMUData.h"
#include "math.h"

float x_vel;
float y_vel;
float z_vel;

int last_time_nsec;
int last_time_sec;

ros::Publisher pub;

void callback(const ocean_server_imu::RawData::ConstPtr& msg){
    filters::RotatedIMUData pub_msg;

    pub_msg.roll = msg->roll;
    pub_msg.pitch = msg->pitch;
    pub_msg.yaw = msg->yaw;

    float cos_phi = cos(pub_msg.roll);
    float cos_theta = cos(pub_msg.yaw);
    float cos_psi = cos(pub_msg.pitch);
    
    float sin_phi = sin(pub_msg.roll);
    float sin_theta = sin(pub_msg.yaw);
    float sin_psi = sin(pub_msg.pitch);

    float x_acc = msg->acceleration.x;
    float y_acc = msg->acceleration.y;
    float z_acc = msg->acceleration.z;

    float final_x = x_acc * (cos_theta * cos_psi) \
                  + y_acc * (sin_phi * sin_theta * cos_psi - cos_phi * sin_psi) \
                  - z_acc * (sin_phi * sin_psi + cos_phi * sin_theta * cos_psi);
    float final_y = x_acc*(cos_theta*sin_psi) \
                  + y_acc*(cos_phi*cos_psi + sin_phi*sin_theta*sin_psi) \
                  - z_acc*(cos_phi*sin_theta*sin_psi - sin_phi * cos_psi);
    float final_z = x_acc*(-sin_theta) \
                  + y_acc*(sin_phi*cos_theta) \
                  - z_acc*(cos_phi*cos_theta);

    pub_msg.acceleration.x = final_x;
    pub_msg.acceleration.y = final_y;
    pub_msg.acceleration.z = final_z;
    pub_msg.header = msg->header;

    pub.publish(pub_msg);
    
}

int main(int argc, char **argv) {
    x_vel = 0.0;
    y_vel = 0.0;
    z_vel = 0.0;

    last_time_sec = -1;
    last_time_nsec = -1;

    ros::init(argc, argv, "imu_filter");

    ros::NodeHandle n;
    
    pub = n.advertise<filters::RotatedIMUData>("imu_rotated_data", 1000);
    ros::Subscriber sub = n.subscribe("imu_data", 1000, callback);
    
    ros::spin();

    return 0;
}

