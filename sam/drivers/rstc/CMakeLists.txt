cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_rstc)

add_library(asf_sam_drivers_rstc STATIC
    rstc.c
    rstc.h
)
add_library(asf::sam::drivers::rstc ALIAS asf_sam_drivers_rstc)

target_include_directories(asf_sam_drivers_rstc
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_rstc
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
