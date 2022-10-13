cmake_minimum_required(VERSION 3.0.0)
project(k_diff_pairs)

set(CMAKE_CXX_STANDARD 14)

# build googletest
enable_testing()
add_subdirectory(third_party/googletest)
include_directories(third_party/googletest/googletest/include)

# build solution library
add_subdirectory(lib)
include_directories(lib)

# build main
add_executable(main src/main.cpp)
target_link_libraries(main solution)

# build test
add_subdirectory(test)
