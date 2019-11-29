cmake_required_version(3.15)

option(CONF_BOARD_CAN "Enable support for the SAM4E CAN Peripheral" On)

add_library(sam4e_xplained_pro
    init.c
    led.h
    sam4e_xplained_pro.h
    )

target_compile_definitions(sam4e_xplained_pro __SAM4E16E__)

if (CONF_BOARD_CAN)
    target_compile_definitions(sam4e_xplained_pro CONF_BOARD_CAN)
endif()

target_include_directory(sam4e_xplained_pro PRIVATE ${CMAKE_CURRENT_SOURCE_DIRECTORY})

