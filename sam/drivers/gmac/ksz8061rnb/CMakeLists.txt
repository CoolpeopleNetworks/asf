cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac_ksz8061rnb)

add_library(asf_sam_drivers_gmac_ksz8061rnb STATIC
    ../gmac_phy.c
    ../gmac_raw2.c
    ../gmac_raw2.h
    ../gmac.h
)
add_library(asf::sam::drivers::gmac::ksz8061rnb ALIAS asf_sam_drivers_gmac_ksz8061rnb)

target_include_directories(asf_sam_drivers_gmac_ksz8061rnb
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}..
        ${CMAKE_CURRENT_SOURCE_DIR}/../module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_ksz8061rnb
    PUBLIC 
        asf::common::boards
        asf::sam::utils
)

if (ASF_USE_FREERTOS)
    target_compile_definitions(asf_sam_drivers_gmac_ksz8061rnb PUBLIC FREERTOS_USED)
    target_link_libraries(asf_sam_drivers_gmac_ksz8061rnb PUBLIC asf::thirdparty::freertos)
endif()
