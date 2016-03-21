cmake_minimum_required(VERSION 2.8)

#project(${PROJECT_NAME})

add_library(add add.cpp)

add_executable(add-main main.cpp)

target_link_libraries(add-main add)
