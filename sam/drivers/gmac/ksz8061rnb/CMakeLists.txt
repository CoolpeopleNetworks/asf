cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac_ksz8061mb)

add_library(asf_sam_drivers_gmac_ksz8061mb STATIC
    ../gmac_phy.c
    ../gmac_raw2.c
    ../gmac_raw2.h
    ../gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8061mb ALIAS asf_sam_drivers_gmac_ksz8061mb)

target_include_directories(asf_sam_drivers_gmac_ksz8061mb
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}..
        ${CMAKE_CURRENT_SOURCE_DIR}/../module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8061mb
    PUBLIC 
        asf::common::boards
        asf::sam::utils
)

if (ASF_USE_FREERTOS)
    target_compile_definitions(asf_sam_drivers_gmac_ksz8061mb PUBLIC FREERTOS_USED)
    target_link_libraries(asf_sam_drivers_gmac_ksz8061mb PUBLIC asf::thirdparty::freertos)
endif()
