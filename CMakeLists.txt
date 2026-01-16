cmake_minimum_required(VERSION 3.20)
project(MLlib)

find_package(Eigen3 REQUIRED)

add_executable(MLlib src/main.cpp)
target_link_libraries(MLlib Eigen3::Eigen)

