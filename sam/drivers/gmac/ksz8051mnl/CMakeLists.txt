cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac_kxz8051mnl)

add_library(asf_sam_drivers_gmac_ksz8051mnl STATIC
    ../gmac_phy.c
    ../gmac_raw.c
    ../gmac_raw.h
    ../gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8051mnl ALIAS asf_sam_drivers_gmac_ksz8051mnl)

target_include_directories(
    asf_sam_drivers_gmac_ksz8051mnl
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/..
        ${CMAKE_CURRENT_SOURCE_DIR}/../module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8051mnl
    PUBLIC 
        asf::common::boards
        asf::sam::utils
)

if (ASF_SAM_DRIVER_GMAC_USE_FREERTOS)
    target_compile_definitions(asf_sam_drivers_gmac_ksz8051mnl PRIVATE FREERTOS_USED)
    target_link_libraries(asf_sam_drivers_gmac_ksz8051mnl PRIVATE asf::thirdparty::freertos)
endif()
