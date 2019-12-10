cmake_minimum_required(VERSION 3.15)
project(asf_common_utils)

add_library(asf_common_utils STATIC
    interrupt/interrupt_sam_nvic.c
    interrupt/interrupt_sam_nvic.h

    stdio/read.c
    stdio/write.c
)
add_library(asf::common::utils ALIAS asf_common_utils)

target_include_directories(asf_common_utils 
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/interrupt
    ${CMAKE_CURRENT_SOURCE_DIR}/stdio/stdio_serial
)

target_link_libraries(asf_common_utils
    PUBLIC
        asf::common::boards
        asf::common::services::serial
)
