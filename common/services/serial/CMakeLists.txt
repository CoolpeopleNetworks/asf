cmake_minimum_required(VERSION 3.15)
project(asf_common_services_serial)

add_library(asf_common_services_serial STATIC
    serial.h
    usart_serial.c
)
add_library(asf::common::services::serial ALIAS asf_common_services_serial)

target_include_directories(
    asf_common_services_serial 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_serial 
    PUBLIC 
        asf::common::utils
        asf::common::boards
        asf::common::services::clock
        asf::${ASF_FAMILY_DIRECTORY}::drivers::uart
        asf::${ASF_FAMILY_DIRECTORY}::drivers::usart
)
