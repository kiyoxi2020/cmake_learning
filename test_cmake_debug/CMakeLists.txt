cmake_minimum_required(VERSION 3.0)

project(test)
include_directories(include)
add_executable(test main.cpp src/swap.cpp)
# set(CMAKE_BUILD_TYPE debug)
