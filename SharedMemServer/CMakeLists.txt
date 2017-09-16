cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
project(Shared_Memory)

#To tell Cmake where Boost is installed.
SET(BOOST_ROOT C:/boost_1_45_0/)

find_package(Boost 1.45.0)

#To Tell Cmake to link against all .lib of Boost
ADD_DEFINITIONS( -DBOOST_ALL_NO_LIB ) 
include_directories(${Boost_INCLUDE_DIRS})
add_executable(SharedMemServer SharedMemServer.cpp)
