cmake_minimum_required(VERSION 3.6)
project(Codes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "D:/Codes")
set(SOURCE_FILES
    INOI1402.cpp)

include_directories(.)
#include_directories("edX ITMO Course")

add_executable(Codes ${SOURCE_FILES})