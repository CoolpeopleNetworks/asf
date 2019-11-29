cmake_minimum_required(VERSION 3.15)
project(asf_sam_boards_sam4e_xplained_pro)

option(CONF_BOARD_CAN "Enable support for the SAM4E CAN Peripheral" Off)

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

target_include_directories(asf_sam_boards_sam4e_xplained_pro 
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIRECTORY}
)

target_link_libraries(asf_sam_boards_sam4e_xplained_pro 
    PRIVATE
        asf::sam::boards 
        asf::common::boards 
        asf::sam::utils 
        asf::thirdparty::cmsis
)
