cmake_minimum_required(VERSION 3.0)
project(my_project)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

add_compile_options(-std=c++17)

include_directories(
  include
)

add_executable(my_project src/my_project.cpp)

## Build the docs
set_property(
  TARGET my_project
  PROPERTY PUBLIC_INCLUDE_DIRECTORIES
  ${PROJECT_SOURCE_DIR}/include/my_project
)
add_subdirectory(docs)