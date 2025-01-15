if (ENABLE_TESTS)
    enable_testing()
    message("-- Enable testing - ON")
    add_subdirectory(tests)
else()
    message(WARNING "-- Enable testing - OFF")
endif()
