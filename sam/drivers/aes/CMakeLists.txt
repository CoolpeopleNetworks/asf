cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_aes)

add_library(asf_sam_drivers_aes STATIC
    aes.c
    aes.h
)
add_library(asf::sam::drivers::aes ALIAS asf_sam_drivers_aes)

target_include_directories(asf_sam_drivers_aes 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_aes 
    PUBLIC 
        asf::sam::utils
        asf::common::boards
        asf::common::services::clock
)
