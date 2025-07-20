cmake_minimum_required(VERSION 3.8)
project(jetracer)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# find ament & ROS 2 deps
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(image_transport REQUIRED)
find_package(softsys_msgs REQUIRED)

# tell CMake where to find your headers
include_directories(include)

# === Vision/Tuning Node ===
add_executable(tuner src/hsv_sub.cpp)
ament_target_dependencies(tuner
  rclcpp
  sensor_msgs
  std_msgs
  cv_bridge
  OpenCV
  image_transport
  softsys_msgs
)
target_include_directories(tuner PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# === Lead controller library ===
add_library(lead_controller_lib
  src/lead_controller.cpp
)
ament_target_dependencies(lead_controller_lib
  rclcpp
  std_msgs
)

# === Lead controller node ===
add_executable(lead_controller_node
  src/lead_controller_node.cpp
)
ament_target_dependencies(lead_controller_node
  rclcpp
  std_msgs
)
target_link_libraries(lead_controller_node
  lead_controller_lib
)

# Install headers
install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

# Install libraries & executables
install(
  TARGETS
    tuner
    lead_controller_lib
    lead_controller_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
