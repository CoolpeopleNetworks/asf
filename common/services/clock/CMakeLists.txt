cmake_minimum_required(VERSION 3.15)
project(asf_common_services_clock)

add_library(asf_common_services_clock STATIC
    ${ASF_CHIP_FAMILY}/module_config/conf_clock.h
    ${ASF_CHIP_FAMILY}/genclk.h
    ${ASF_CHIP_FAMILY}/osc.h
    ${ASF_CHIP_FAMILY}/pll.h
    ${ASF_CHIP_FAMILY}/sysclk.c
    ${ASF_CHIP_FAMILY}/sysclk.h
    dfll.h
    genclk.h
    osc.h
    pll.h
    sysclk.h
)
add_library(asf::common::services::clock ALIAS asf_common_services_clock)

target_include_directories(
    asf_common_services_clock
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/${ASF_CHIP_FAMILY}/module_config
)

target_link_libraries(
    asf_common_services_clock
    PUBLIC
        asf::common::boards
        asf::${ASF_FAMILY_DIRECTORY}::boards
        asf::${ASF_FAMILY_DIRECTORY}::drivers::pmc
)
