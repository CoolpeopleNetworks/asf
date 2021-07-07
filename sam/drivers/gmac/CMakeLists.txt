cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac)

add_library(asf_sam_drivers_gmac INTERFACE)
add_library(asf::sam::drivers::gmac ALIAS asf_sam_drivers_gmac)

target_include_directories(asf_sam_drivers_gmac
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

if (ASF_GMAC_MODEL)
    add_subdirectory(${ASF_GMAC_MODEL})

    target_link_libraries(asf_sam_drivers_gmac
        INTERFACE
        asf::sam::drivers::gmac::${ASF_GMAC_MODEL})
endif()
