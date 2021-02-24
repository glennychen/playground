cmake_minimum_required(VERSION 3.5)

project(myproject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package( Boost REQUIRED COMPONENTS program_options regex filesystem random timer )
include_directories( ${Boost_INCLUDE_DIRS} )

add_executable(myproject main.cpp)

target_link_libraries(myproject ${Boost_LIBRARIES})


