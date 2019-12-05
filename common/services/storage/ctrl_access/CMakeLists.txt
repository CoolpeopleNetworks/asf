cmake_minimum_required(VERSION 3.15)
project(asf_common_services_storage_ctrl_access)

add_library(asf_common_services_storage_ctrl_access STATIC
    conf_access.h
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
        asf::common::boards
        asf::common::components::memory::sd_mmc::mci
        asf::${ASF_FAMILY_DIRECTORY}::utils
        asf::${ASF_FAMILY_DIRECTORY}::boards
)

target_compile_definitions(
    asf_common_services_storage_ctrl_access
    PUBLIC
        SD_MMC_ENABLE
        ACCESS_MEM_TO_RAM_ENABLED=1
)

if (ASF_FREERTOS_USED)
    target_compile_definitions(
        asf_common_services_storage_ctrl_access
        PUBLIC
            FREERTOS_USED
    )

    target_link_libraries(
        asf_common_services_storage_ctrl_access
        PUBLIC
            asf::thirdparty::freertos
    )
endif()