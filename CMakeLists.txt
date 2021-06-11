project(STL-learn)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 11)
  
set(test tests/__stl_staic_template_member_bug.cpp)

add_executable(STL-learn ${test})