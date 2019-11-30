cmake_minimum_required(VERSION 3.15)
project(asf_common_services_clock)

add_subdirectory(${ASF_CHIP_FAMILY})

add_library(asf_common_services_clock INTERFACE)
add_library(asf::common::services::clock ALIAS asf_common_services_clock)

target_include_directories(
    asf_common_services_clock
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_clock
    INTERFACE
        asf::common::services::ioport
        asf::common::services::clock::${ASF_CHIP_FAMILY}
)
