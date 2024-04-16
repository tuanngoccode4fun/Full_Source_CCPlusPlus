cmake_minimum_required(VERSION 3.16.3)
project(json_sample)
add_executable(json_sample src/main.cpp)
target_link_libraries(json_sample /usr/lib/x86_64-linux-gnu/libjsoncpp.a)
