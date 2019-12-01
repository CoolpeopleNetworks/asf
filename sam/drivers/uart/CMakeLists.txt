cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_uart)

add_library(asf_sam_drivers_uart STATIC
    uart.c
    uart.h
)
add_library(asf::sam::drivers::uart ALIAS asf_sam_drivers_uart)

target_include_directories(asf_sam_drivers_uart
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_uart
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
