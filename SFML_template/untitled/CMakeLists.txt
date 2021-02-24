cmake_minimum_required(VERSION 3.17)
project(mysfml)

set(CMAKE_CXX_STANDARD 17)

add_executable(mysfml main.cpp)

#include_directories("/usr/include")
#link_directories("/usr/lib/x86_64-linux-gnu/")
#find_package(SFML REQUIRED system window graphics network audio)

target_link_libraries(mysfml sfml-graphics sfml-window sfml-system)