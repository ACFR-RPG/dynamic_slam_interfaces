# Interface representing multiple object paths over time
# header should be the current ROS time

std_msgs/Header header
# List of object odometry paths, one per object path segment
ObjectOdometryPath[] paths