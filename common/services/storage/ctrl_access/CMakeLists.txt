cmake_minimum_required(VERSION 3.15)
project(asf_common_services_storage_ctrl_access)

add_library(asf_common_services_storage_ctrl_access STATIC
    ctrl_access.c
    ctrl_access.h
)
add_library(asf::common::services::storage::ctrl_access ALIAS asf_common_services_storage_ctrl_access)

target_include_directories(
    asf_common_services_storage_ctrl_access 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_common_services_storage_ctrl_access 
    PUBLIC 
        asf::common::utils
        asf::${ASF_FAMILY_DIRECTORY}::utils
)
