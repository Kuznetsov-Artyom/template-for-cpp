option(ENABLE_TESTS "Enable testing" OFF)
option(CCACHE_BUILD "Building using ccache" OFF)

if (CCACHE_BUILD)
    find_program(CCACHE_FOUND ccache)
    if (CCACHE_FOUND)
        message(STATUS "Found ccache - FOUND")
        set(CMAKE_C_COMPILER_LAUNCHER ccache)
        set(CMAKE_CXX_COMPILER_LAUNCHER ccache)
    else()
        message(FATAL_ERROR "Found ccache - NOT FOUND")
    endif()
endif()

