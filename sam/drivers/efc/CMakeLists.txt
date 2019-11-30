cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_efc)

add_library(asf_sam_drivers_efc STATIC
    efc.c
    efc.h
)
add_library(asf::sam::drivers::efc ALIAS asf_sam_drivers_efc)

target_include_directories(asf_sam_drivers_efc
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_efc
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
