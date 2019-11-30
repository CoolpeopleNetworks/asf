cmake_minimum_required(VERSION 3.15)
project(asf_common_services_clock_sam4e)

add_library(asf_common_services_clock_sam4e STATIC
    module_config/conf_clock.h
    genclk.h
    osc.h
    pll.h
    sysclk.c
    sysclk.h
)

add_library(asf::common::services::clock::sam4e ALIAS asf_common_services_clock_sam4e)

target_include_directories(
    asf_common_services_clock_sam4e
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_common_services_clock_sam4e
    PUBLIC
        asf::common::services::clock::${ASF_CHIP_FAMILY}
)
