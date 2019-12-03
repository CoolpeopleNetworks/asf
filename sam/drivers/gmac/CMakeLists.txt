cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac)

add_library(asf_sam_drivers_gmac INTERFACE)
add_library(asf::sam::drivers::gmac ALIAS asf_sam_drivers_gmac)

option(ASF_SAM_DRIVER_GMAC_USE_FREERTOS "Enable FreeRTOS synchronization primitives in GMAC driver." OFF)

target_include_directories(asf_sam_drivers_gmac
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

add_library(asf_sam_drivers_gmac_ksz8051mnl STATIC
    gmac_phy.c
    gmac_raw.c
    gmac_raw.h
    gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8051mnl ALIAS asf_sam_drivers_gmac_ksz8051mnl)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8051mnl
    PUBLIC 
        asf::common::boards
        asf::sam::utils
        asf::sam::drivers::gmac
)

if (ASF_SAM_DRIVER_GMAC_USE_FREERTOS)
    target_compile_definitions(asf_sam_drivers_gmac_ksz8051mnl PRIVATE FREERTOS_USED)
endif()

add_library(asf_sam_drivers_gmac_ksz8061rnb STATIC
    gmac_phy.c
    gmac_raw_2.c
    gmac_raw_2.h
    gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8061rnb ALIAS asf_sam_drivers_gmac_ksz8061rnb)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8061rnb
    PUBLIC 
        asf::common::boards
        asf::sam::utils
        asf::sam::drivers::gmac
)
