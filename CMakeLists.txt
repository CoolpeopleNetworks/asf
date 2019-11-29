cmake_required_version(3.15)
project(asf)

if (NOT ASF_BOARD)
    set(ASF_BOARD "sam4e_xplained_pro")
    set(ASF_CHIP_FAMILY "sam4e")
endif()

add_subdirectory(sam)
