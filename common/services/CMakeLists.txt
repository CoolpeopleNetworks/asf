cmake_minimum_required(VERSION 3.15)
project(asf_common_services)

add_subdirectory(clock)
add_subdirectory(delay)
add_subdirectory(ioport)
add_subdirectory(serial)
add_subdirectory(sleepmgr)
add_subdirectory(storage)

add_library(asf_common_services INTERFACE)
add_library(asf::common::services ALIAS asf_common_services)

target_link_libraries(
    asf_common_services
    INTERFACE
        asf::common::services::ioport
        asf::common::services::clock
)
