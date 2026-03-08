cmake_minimum_required(VERSION 3.10)

project(project2-object-lifetime-tracker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX__STANDARD_REQUIRED True)

include_directories(include)

add_executable(main
src/tracker.cpp
src/main.cpp)