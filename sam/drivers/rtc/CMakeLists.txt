cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_rtc)

add_library(asf_sam_drivers_rtc STATIC
    rtc.c
    rtc.h
)
add_library(asf::sam::drivers::rtc ALIAS asf_sam_drivers_rtc)

target_include_directories(asf_sam_drivers_rtc
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_drivers_rtc
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
