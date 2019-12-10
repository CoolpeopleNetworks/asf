cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_pmc)

add_library(asf_sam_drivers_pmc STATIC
    pmc.c
    pmc.h
    sleep.c
    sleep.h
)
add_library(asf::sam::drivers::pmc ALIAS asf_sam_drivers_pmc)

target_include_directories(asf_sam_drivers_pmc 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_pmc 
    PUBLIC 
        asf::sam::utils
#        asf::sam::boards
#        asf::common::boards
)
