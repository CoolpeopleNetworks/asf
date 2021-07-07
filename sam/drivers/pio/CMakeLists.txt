cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_pio)

add_library(asf_sam_drivers_pio STATIC
    pio_handler.c
    pio_handler.h
    pio.c
    pio.h
)
add_library(asf::sam::drivers::pio ALIAS asf_sam_drivers_pio)

target_include_directories(asf_sam_drivers_pio
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_pio
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
