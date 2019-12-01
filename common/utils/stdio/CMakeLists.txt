cmake_minimum_required(VERSION 3.15)
project(asf_common_utils_stdio)

add_subdirectory(stdio_serial)

add_target(asf_common_utils_stdio STATIC
    read.c
    write.c
)
add_target(asf::common::utils::stdio ALIAS asf_common_utils_stdio)

target_include_directories(asf_common_utils_stdio
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_utils_stdio
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
