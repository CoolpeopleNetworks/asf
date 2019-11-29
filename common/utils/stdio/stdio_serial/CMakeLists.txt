cmake_minimum_required(VERSION 3.15)
project(asf_common_utils_stdio_stdio_serial)

add_library(asf_common_utils_stdio_stdio_serial INTERFACE)
add_library(asf::common::utils::stdio::stdio_serial ALIAS asf_common_utils_stdio_stdio_serial)

target_include_directories(asf_common_utils_stdio_stdio_serial
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_utils_stdio_stdio_serial
    PUBLIC 
        asf::sam::utils
        asf::common::boards
        asf::common::services::serial
)
