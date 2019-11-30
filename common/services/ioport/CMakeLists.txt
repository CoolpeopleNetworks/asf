cmake_minimum_required(VERSION 3.15)
project(asf_common_services_ipoort)

add_library(asf_common_services_ipoort INTERFACE)
add_library(asf::common::services::ioport ALIAS asf_common_services_ipoort)

target_include_directories(
    asf_common_services_ipoort 
    INTERFACE 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_ipoort 
    INTERFACE 
        asf::common::utils
        asf::${ASF_CHIP_FAMILY}::utils
)
