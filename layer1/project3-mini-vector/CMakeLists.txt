cmake_minimum_required(VERSION 3.10)

project(project3-mini-vector)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(main 
src/minivector.cpp
src/main.cpp)
