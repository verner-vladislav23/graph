cmake_minimum_required(VERSION 3.17)
project(graph)

set(CMAKE_CXX_STANDARD 20)

add_executable(graph main.cpp list/list.h list/list.cpp)