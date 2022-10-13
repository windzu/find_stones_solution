cmake_minimum_required(VERSION 3.0.0)
project(unit_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} test.cpp)
target_link_libraries(${PROJECT_NAME} gtest gtest_main solution)
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
