cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_can)

add_library(asf_sam_drivers_can STATIC
    can.c
    can.h
)
add_library(asf::sam::drivers::can ALIAS asf_sam_drivers_can)

target_include_directories(asf_sam_drivers_can 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_can 
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
