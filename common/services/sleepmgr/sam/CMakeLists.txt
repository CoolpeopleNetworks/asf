cmake_minimum_required(VERSION 3.15)
project(asf_common_services_sleepmgr_sam)

add_library(asf_common_services_sleepmgr_sam STATIC
    sleepmgr.c
    sleepmgr.h
)
add_library(asf::common::services::sleepmgr::sam ALIAS asf_common_services_sleepmgr_sam)

target_include_directories(
    asf_common_services_sleepmgr_sam
    INTERFACE 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_sleepmgr_sam
    INTERFACE 
        asf::common::utils
        asf::common::services::clock
)
