cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils)

add_library(asf_sam_utils STATIC
    syscalls/gcc/syscalls.c

    cmsis/${ASF_CHIP_FAMILY}/source/templates/gcc/startup_sam4e.c
    cmsis/${ASF_CHIP_FAMILY}/source/templates/exceptions.c
    cmsis/${ASF_CHIP_FAMILY}/source/templates/exceptions.h
    cmsis/${ASF_CHIP_FAMILY}/source/templates/system_sam4e.c
    cmsis/${ASF_CHIP_FAMILY}/source/templates/system_sam4e.h
)
add_library(asf::sam::utils ALIAS asf_sam_utils)

target_include_directories(asf_sam_utils 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/fpu
        ${CMAKE_CURRENT_SOURCE_DIR}/header_files
        ${CMAKE_CURRENT_SOURCE_DIR}/preprocessor
        ${CMAKE_CURRENT_SOURCE_DIR}/cmsis/${ASF_CHIP_FAMILY}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/cmsis/${ASF_CHIP_FAMILY}/source/templates
)

target_link_libraries(asf_sam_utils
    PUBLIC
        asf::thirdparty::cmsis
)
