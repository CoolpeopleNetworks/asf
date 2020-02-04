cmake_minimum_required(VERSION 3.15)
project(asf)

if (NOT ASF_BOARD)
    set(ASF_BOARD "sam4e_xplained_pro")
endif()

if (${ASF_BOARD} STREQUAL "sam4e_xplained_pro")
    set(ASF_FAMILY_DIRECTORY "sam")
    set(ASF_CHIP_FAMILY "sam4e")
endif()

if (${ASF_BOARD} STREQUAL "same70_xplained")
    set(ASF_FAMILY_DIRECTORY "sam")
    set(ASF_CHIP_FAMILY "same70")
endif()

add_subdirectory(common)
add_subdirectory(thirdparty)
add_subdirectory(${ASF_FAMILY_DIRECTORY})
