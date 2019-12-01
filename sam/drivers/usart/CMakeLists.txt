cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_usart)

add_library(asf_sam_drivers_usart STATIC
    usart.c
    usart.h
)
add_library(asf::sam::drivers::usart ALIAS asf_sam_drivers_usart)

target_include_directories(asf_sam_drivers_usart
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_usart
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
