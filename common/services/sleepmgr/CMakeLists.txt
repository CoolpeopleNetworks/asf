cmake_minimum_required(VERSION 3.15)
project(asf_common_services_sleepmgr)

add_subdirectory(${ASF_FAMILY_DIRECTORY})

add_library(asf_common_services_sleepmgr INTERFACE)
add_library(asf::common::services::sleepmgr ALIAS asf_common_services_sleepmgr)

target_include_directories(
    asf_common_services_sleepmgr 
    INTERFACE 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_sleepmgr 
    INTERFACE 
        asf::common::utils
        asf::common::services::clock
        asf::${ASF_FAMILY_DIRECTORY}::utils
        asf::common::services::sleepmgr::${ASF_FAMILY_DIRECTORY}
)
