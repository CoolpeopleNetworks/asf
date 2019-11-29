cmake_minimum_required(VERSION 3.15)
project(sam4e_xplained_pro)

option(CONF_BOARD_CAN "Enable support for the SAM4E CAN Peripheral" Off)

add_library(sam4e_xplained_pro STATIC
    init.c
    led.h
    sam4e_xplained_pro.h
    )

target_compile_definitions(sam4e_xplained_pro __SAM4E16E__)

if (ASF_ENABLE_CAN)
    target_compile_definitions(sam4e_xplained_pro CONF_BOARD_CAN)
endif()

target_include_directory(sam4e_xplained_pro PRIVATE ${CMAKE_CURRENT_SOURCE_DIRECTORY})

