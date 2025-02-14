std_msgs/Header header
std_msgs/ColorRGBA colour
int64 object_id
# indicating which segment of the total object trajectory this message 
# corresponds to. A single object(id) may have multiple segments
int64 path_segment 0
ObjectOdometry[] object_odometries