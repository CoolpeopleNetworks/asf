cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils)

add_subdirectory(cmsis/${ASF_CHIP_FAMILY})

add_library(asf_sam_utils STATIC
    syscalls/gcc/syscalls.c
)
add_library(asf::sam::utils ALIAS asf_sam_utils)

target_include_directories(asf_sam_utils 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/fpu
        ${CMAKE_CURRENT_SOURCE_DIR}/header_files
        ${CMAKE_CURRENT_SOURCE_DIR}/preprocessor
)

target_link_libraries(asf_sam_utils
    PUBLIC
        asf::common::utils
        asf::sam::utils::cmsis::${ASF_CHIP_FAMILY}
        asf::thirdparty::cmsis
)
