cmake_minimum_required(VERSION 3.25.0)

project(math_functions)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ENABLE_TESTS "Enable testing" OFF)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

message("-- Build type - ${CMAKE_BUILD_TYPE}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/archive)

add_subdirectory(lib)
add_subdirectory(3rdparty)

if (ENABLE_TESTS)
    enable_testing()
    message("-- Enable testing - ON")
    add_subdirectory(tests)
else()
    message("-- Enable testing - OFF")
endif()
