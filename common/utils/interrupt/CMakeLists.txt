cmake_minimum_required(VERSION 3.15)
project(asf_common_utils_interrupt)

add_library(asf_common_utils_interrupt_sam STATIC
    interrupt_sam_nvic.c
    interrupt_sam_nvic.h
)
add_library(asf::common::utils::interrupt::sam ALIAS asf_common_utils_interrupt_sam)

target_include_directories(asf_common_utils_interrupt_sam
    INTERFACE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(asf_common_utils_interrupt_sam 
    PUBLIC
    asf::common::utils
    asf::sam::utils
)
