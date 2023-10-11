cmake_minimum_required(VERSION 3.16)

project(mqtt_broker LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(inc)

add_executable(mqtt_broker src/main.cpp)