cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_dmac)

if (ASF_CHIP_FAMILY STREQUAL "sam4e")
    add_library(asf_sam_drivers_dmac STATIC
        dmac.c
        dmac.h
    )
    add_library(asf::sam::drivers::dmac ALIAS asf_sam_drivers_dmac)

    target_include_directories(asf_sam_drivers_dmac
        PUBLIC 
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

    target_link_libraries(
        asf_sam_drivers_dmac
        PUBLIC 
            asf::sam::utils
            asf::common::boards
    )
endif()
