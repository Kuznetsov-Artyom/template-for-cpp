cmake_minimum_required(VERSION 3.25)

project(arith_functions)

include_directories(include)
include_directories(src)

set(ARITH_HPP include/arith.hpp)
set(ARITH_CPP src/arith.cpp)
add_library(arith SHARED ${ARITH_HPP} ${ARITH_CPP})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} arith)
