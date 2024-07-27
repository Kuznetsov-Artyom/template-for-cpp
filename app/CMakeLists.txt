set(TARGET_NAME math_app)

file(GLOB_RECURSE TARGET_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${TARGET_NAME} ${TARGET_SOURCES})

target_link_libraries(${TARGET_NAME}
    arith_ops
)
