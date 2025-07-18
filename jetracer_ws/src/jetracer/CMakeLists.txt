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



# cmake_minimum_required(VERSION 3.5)
# project(jetracer)

# # Default to C++17
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Find required packages
# find_package(ament_cmake REQUIRED)
# find_package(rclcpp REQUIRED)
# find_package(sensor_msgs REQUIRED)
# # find_package(std_msgs REQUIRED)
# find_package(softsys_msgs REQUIRED)
# find_package(cv_bridge REQUIRED)
# find_package(OpenCV REQUIRED)
# find_package(image_transport REQUIRED)

# # Add your executable
# add_executable(tuner src/tuner.cpp)

# # Link against dependencies
# ament_target_dependencies(tuner
#   rclcpp
#   sensor_msgs
#   cv_bridge
#   image_transport
#   OpenCV
#   # std_msgs
#   softsys_msgs
# )

# # Link OpenCV libraries explicitly
# target_link_libraries(tuner ${OpenCV_LIBS})

# # ament_export_dependencies(softsys_msgs)

# # Install target
# install(TARGETS
#   tuner
#   DESTINATION lib/${PROJECT_NAME}
# )

# # Package declaration
# ament_package()



