cmake_minimum_required(VERSION 3.10)

# Project name
project(opencv)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Add the executable
add_executable(main main.cpp)

# Link OpenCV libraries to the executable
target_link_libraries(main ${OpenCV_LIBS})
