cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac)

add_library(asf_sam_drivers_gmac_ksz8051mnl STATIC
    gmac_phy.c
    gmac_raw.c
    gmac_raw.h
    gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8051mnl ALIAS asf_sam_drivers_gmac_ksz8051mnl)

target_include_directories(asf_sam_drivers_gmac_ksz8051mnl
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8051mnl
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)

add_library(asf_sam_drivers_gmac_ksz8061rnb STATIC
    gmac_phy.c
    gmac_raw_2.c
    gmac_raw_2.h
    gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8061rnb ALIAS asf_sam_drivers_gmac_ksz8061rnb)

target_include_directories(asf_sam_drivers_gmac_ksz8061rnb
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8061rnb
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
