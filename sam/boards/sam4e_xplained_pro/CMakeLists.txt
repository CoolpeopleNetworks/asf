cmake_minimum_required(VERSION 3.15)
project(asf_sam_boards_sam4e_xplained_pro)

option(ASF_ENABLE_CAN "Enable support for the Controller Area Network (CAN) Peripheral" Off)
option(ASF_ENABLE_SRAM "Enable support for the external SRAM interface" Off)
option(ASF_ENABLE_SD_MMC_HSMCI "Enable support for the SD Card" Off)

add_library(asf_sam_boards_sam4e_xplained_pro STATIC
    init.c
    led.h
    sam4e_xplained_pro.h
    )
add_library(asf::sam::boards::sam4e_xplained_pro ALIAS asf_sam_boards_sam4e_xplained_pro)

target_compile_definitions(asf_sam_boards_sam4e_xplained_pro PUBLIC __SAM4E16E__)

if (ASF_ENABLE_CAN)
    target_compile_definitions(asf_sam_boards_sam4e_xplained_pro PUBLIC CONF_BOARD_CAN)
endif()

if (ASF_ENABLE_SRAM)
    target_compile_definitions(asf_sam_boards_sam4e_xplained_pro PUBLIC CONF_BOARD_SRAM)
endif()

if (ASF_ENABLE_SD_MMC_HSMCI)
    target_compile_definitions(asf_sam_boards_sam4e_xplained_pro PUBLIC CONF_BOARD_SD_MMC_HSMCI)
endif()

target_include_directories(
    asf_sam_boards_sam4e_xplained_pro 
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/board_config
)

target_link_libraries(
    asf_sam_boards_sam4e_xplained_pro 
    PRIVATE
        asf::sam::boards 
        asf::sam::utils 
        asf::common::boards 
        asf::common::services
        asf::thirdparty::cmsis
)
