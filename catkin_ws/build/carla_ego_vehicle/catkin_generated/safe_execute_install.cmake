execute_process(COMMAND "/home/carla/carla-apollo/catkin_ws/build/carla_ego_vehicle/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/carla/carla-apollo/catkin_ws/build/carla_ego_vehicle/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
