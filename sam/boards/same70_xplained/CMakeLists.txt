cmake_minimum_required(VERSION 3.15)
project(asf_sam_boards_same70_xplained)

option(ASF_ENABLE_CAN "Enable support for the Controller Area Network (CAN) Peripheral" Off)
option(ASF_ENABLE_DRAM "Enable support for the DRAM controller" Off)
option(ASF_ENABLE_SD_MMC_HSMCI "Enable support for the SD Card" Off)
option(ASF_ENABLE_KSZ8051MNL "Enable the KXZ8051MNL GMAC" Off)

set(ASF_GMAC_MODEL "ksz8051mnl" CACHE STRING "")
set(ASF_ETHERNET_PHY_MODEL "ksz8081ma" CACHE STRING "")

add_library(asf_sam_boards_same70_xplained STATIC
    init.c
    led.h
    same70_xplained.h
    )
add_library(asf::sam::boards::same70_xplained ALIAS asf_sam_boards_same70_xplained)

target_compile_definitions(asf_sam_boards_same70_xplained PUBLIC __SAME70Q21__)

if (ASF_ENABLE_CAN)
    target_compile_definitions(asf_sam_boards_same70_xplained PUBLIC CONF_BOARD_CAN)
endif()

if (ASF_ENABLE_DRAM)
    target_compile_definitions(asf_sam_boards_same70_xplained PUBLIC CONF_BOARD_SDRAMC)
endif()

if (ASF_ENABLE_SD_MMC_HSMCI)
    target_compile_definitions(asf_sam_boards_same70_xplained PUBLIC CONF_BOARD_SD_MMC_HSMCI)
endif()

if (ASF_ENABLE_KSZ8051MNL)
    target_compile_definitions(asf_sam_boards_same70_xplained PUBLIC CONF_BOARD_KSZ8051MNL)
endif()

target_include_directories(
    asf_sam_boards_same70_xplained 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/board_config
)

target_link_libraries(
    asf_sam_boards_same70_xplained 
    PUBLIC
        asf::sam::utils
        asf::sam::boards
        asf::sam::drivers::pio
        asf::common::services::ioport
)
