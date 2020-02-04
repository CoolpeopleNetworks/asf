cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_xdmac)

add_library(asf_sam_drivers_xdmac STATIC
    xdmac.c
    xdmac.h
)
add_library(asf::sam::drivers::xdmac ALIAS asf_sam_drivers_xdmac)

target_include_directories(asf_sam_drivers_xdmac
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_xdmac
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
