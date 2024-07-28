set(TARGET_NAME math_app)

file(GLOB_RECURSE TARGET_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${TARGET_NAME} ${TARGET_SOURCES})

set_target_properties(${TARGET_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/app
)

target_include_directories(${TARGET_NAME} PUBLIC
    ${MATH_INCLUDE_DIR}
)

target_link_libraries(${TARGET_NAME} PUBLIC
    math_func
    arith_ops
)
