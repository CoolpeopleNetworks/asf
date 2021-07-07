cmake_minimum_required(VERSION 3.15)
project(asf_common_services_swlY)

add_subdirectory(${ASF_FAMILY_DIRECTORY})

add_library(asf_common_services_delay INTERFACE)
add_library(asf::common::services::delay ALIAS asf_common_services_delay)

target_include_directories(
    asf_common_services_delay
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_delay
    INTERFACE
        asf::common::services::delay::${ASF_FAMILY_DIRECTORY}
)
