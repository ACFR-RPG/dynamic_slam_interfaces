# This represents the odometry (pose and velocity) of a single object with given id
# We use the header from odom.header which should be the timestamp 
# of the estimated motion/pose

# object pose (L_w_k) and body-centric velocity.
nav_msgs/Odometry odom
# motion in world from k-1 to k
geometry_msgs/PoseWithCovariance h_w_km1_k
# unique object id (j)
int64 object_id
# sequence ID: consecutively increasing ID (k)
# Sequence id's can be used to indicate when odometries are missing
# as they will be out of order (but should always be increasing)
uint32 sequence 