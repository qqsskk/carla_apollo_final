#!/bin/bash -e

#there is a bug in Autoware, that prevents the stack from starting with very low timestamps
#https://github.com/autowarefoundation/autoware/issues/2200
#
#cleanup from previous runs
#rosnode cleanup <<< 'y'

#As a workaround we wait 5 seconds in simulation time
echo "Waiting for 3 seconds in simulation time..."
python << EOF
import sys
import rospy
from rosgraph_msgs.msg import Clock

def on_clock(data):
    if data.clock.to_sec() >= 3:
        rospy.signal_shutdown("")

rospy.init_node("sleep", anonymous=True)
subscriber = rospy.Subscriber("/clock", Clock, on_clock)
rospy.spin()
EOF
echo "Starting Apollo Challenge."

roslaunch $CARLA_APOLLO_ROOT/challenge.launch


exit $?
