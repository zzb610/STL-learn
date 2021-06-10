project(STL-learn)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 11)
  
set(test Test-STL/config_test.cpp)

add_executable(STL-learn ${test})