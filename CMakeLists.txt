cmake_minimum_required(VERSION 3.2)
project(CursoCpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 0062.cpp)
add_executable(CursoCpp ${SOURCE_FILES})