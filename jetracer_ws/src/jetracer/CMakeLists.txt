cmake_minimum_required(VERSION 3.8)
project(jetracer)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(image_transport REQUIRED)
find_package(softsys_msgs REQUIRED)

add_executable(tuner src/hsv_sub.cpp)

ament_target_dependencies(tuner
  rclcpp
  sensor_msgs
  cv_bridge
  OpenCV
  image_transport
  softsys_msgs
)

target_include_directories(tuner PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

install(TARGETS
  tuner
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
