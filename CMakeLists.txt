cmake_minimum_required(VERSION 3.25.0)

project(math_functions)

set(MATH_COMMON_CMAKE_UTILS ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(${MATH_COMMON_CMAKE_UTILS}/config.cmake)
include(${MATH_COMMON_CMAKE_UTILS}/options.cmake)

set(MATH_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(MATH_LIB_DIR ${CMAKE_SOURCE_DIR}/lib)

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(3rdparty)

include(${MATH_COMMON_CMAKE_UTILS}/tests.cmake)
