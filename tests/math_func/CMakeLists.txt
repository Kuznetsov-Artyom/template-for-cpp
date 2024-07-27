set(TARGET_NAME math_func_test)

file(GLOB_RECURSE TARGET_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${TARGET_NAME} ${TARGET_SOURCES})

target_include_directories(${TARGET_NAME} PUBLIC
    ${MATH_INCLUDE_DIR}
)

target_link_libraries(${TARGET_NAME} PUBLIC
    math_func
    arith_ops
    gtest
    gtest_main
)
