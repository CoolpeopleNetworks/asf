cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_rtt)

add_library(asf_sam_drivers_rtt STATIC
    rtt.c
    rtt.h
)
add_library(asf::sam::drivers::rtt ALIAS asf_sam_drivers_rtt)

target_include_directories(asf_sam_drivers_rtt
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_rtt
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
