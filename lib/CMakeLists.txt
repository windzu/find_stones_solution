cmake_minimum_required(VERSION 3.0.0)
project(solution)

set(CMAKE_CXX_STANDARD 14)
include_directories(.)
add_library(${PROJECT_NAME} solution.cpp)


