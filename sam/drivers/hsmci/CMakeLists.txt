cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_hsmci)

add_library(asf_sam_drivers_hsmci STATIC
    hsmci.c
    hsmci.h
)
add_library(asf::sam::drivers::hsmci ALIAS asf_sam_drivers_hsmci)

target_include_directories(asf_sam_drivers_hsmci
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_hsmci
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
