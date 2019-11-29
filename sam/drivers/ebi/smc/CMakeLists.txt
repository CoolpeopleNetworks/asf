cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_smc)

add_library(asf_sam_drivers_smc STATIC
    smc.c
    smc.h
)
add_library(asf::sam::drivers::smc ALIAS asf_sam_drivers_smc)

target_include_directories(asf_sam_drivers_smc
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_smc
    PUBLIC 
        asf::sam::utils
        asf::common::boards
        asf::${ASF_FAMILY_DIRECTORY}::boards::${ASF_BOARD}
)
