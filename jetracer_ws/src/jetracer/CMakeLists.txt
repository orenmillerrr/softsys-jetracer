cmake_minimum_required(VERSION 3.8)
project(jetracer)

# # C++14 for ROS2 Galactic
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)
find_package(OpenCV REQUIRED)
find_package(softsys_msgs REQUIRED)

include_directories(
  include
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(tuner src/hsv_sub.cpp)

ament_target_dependencies(tuner
  rclcpp
  sensor_msgs
  cv_bridge
  OpenCV
  image_transport
  softsys_msgs
)

target_link_libraries(tuner 
  ${OpenCV_LIBS}
  )

install(TARGETS
  tuner
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()



# cmake_minimum_required(VERSION 3.5)
# project(vision_controller)

# # Required for C++14 or later
# set(CMAKE_CXX_STANDARD 14)

# # Find dependencies
# find_package(ament_cmake REQUIRED)
# find_package(rclcpp REQUIRED)
# find_package(sensor_msgs REQUIRED)
# find_package(OpenCV REQUIRED)
# find_package(cv_bridge REQUIRED)
# find_package(image_transport REQUIRED)
# find_package(softsys_msgs REQUIRED)

# # Include directories
# include_directories(
#   include
#   ${OpenCV_INCLUDE_DIRS}
# )

# # Add executable
# add_executable(image_subscriber src/image_subscriber.cpp)

# # Link libraries
# ament_target_dependencies(image_subscriber
#   rclcpp
#   sensor_msgs
#   OpenCV
#   cv_bridge
#   image_transport
#   softsys_msgs
# )

# # Install target
# install(TARGETS image_subscriber
#   DESTINATION lib/${PROJECT_NAME}
# )

# # Install launch or config files if needed
# # install(DIRECTORY launch DESTINATION share/${PROJECT_NAME}/)

# ament_package()
