cmake_minimum_required(VERSION 3.5)
project(jetracer)

# Default to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(image_transport REQUIRED)

# Add your executable
add_executable(tuner src/hsv_sub.cpp)

# Link against dependencies
ament_target_dependencies(tuner
  rclcpp
  sensor_msgs
  cv_bridge
  image_transport
  OpenCV
)

# Link OpenCV libraries explicitly
target_link_libraries(tuner ${OpenCV_LIBS})

# Install target
install(TARGETS
  tuner
  DESTINATION lib/${PROJECT_NAME}
)

# Package declaration
ament_package()



# cmake_minimum_required(VERSION 3.5)
# project(jetracer)

# # Default to C++14
# if(NOT CMAKE_CXX_STANDARD)
#   set(CMAKE_CXX_STANDARD 14)
# endif()

# if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
#   add_compile_options(-Wall -Wextra -Wpedantic)
# endif()

# find_package(OpenCV REQUIRED)
# find_package(cv_bridge REQUIRED)
# find_package(sensor_msgs REQUIRED)
# find_package(image_transport REQUIRED)

# add_executable(tuner src/hsv_sub.cpp)

# ament_target_dependencies(tuner
#   rclcpp
#   sensor_msgs
#   cv_bridge
#   image_transport
#   OpenCV
# )

# target_link_libraries(tuner ${OpenCV_LIBS})

# install(TARGETS
#   tuner
#   DESTINATION lib/${PROJECT_NAME}
# )

# ament_package()
