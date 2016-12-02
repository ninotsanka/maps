cmake_minimum_required(VERSION 3.6)
project(MyMap)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES useMyMap.cpp MyMap.h MyMap.cpp Entry.h Entry.cpp)
add_executable(MyMap ${SOURCE_FILES})