cmake_minimum_required(VERSION 3.15)
project(asf_common_services)

add_subdirectory(clock)
add_subdirectory(ioport)

add_library(asf_common_services INTERFACE)
add_library(asf::common::services ALIAS asf_common_services)

target_link_libraries(
    asf_common_services
    INTERFACE
        asf::common::services::ioport
    PUBLIC
        asf::common::services::clock
)
