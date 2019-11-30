cmake_minimum_required(VERSION 3.15)
project(asf_common_services_delay_sam)

add_library(asf_common_services_delay_sam INTERFACE)
add_library(asf::common::services::delay::sam ALIAS asf_common_services_delay_sam)

target_include_directories(
    asf_common_services_delay_sam
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_delay_sam
    PUBLIC
        asf::sam::utils
)
