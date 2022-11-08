cmake_minimum_required (VERSION 3.17.0)

set(PROJECT_NAME Yellow_Belt)
project(${PROJECT_NAME})

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Includes)
add_subdirectory(src)
