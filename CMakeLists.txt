# CMake project
cmake_minimum_required(VERSION 3.28)
project(ray-tracing-in-one-weekend)

# Main executable
add_executable(main "src/main.cpp")

# Include directories
target_include_directories(main PRIVATE "src/")