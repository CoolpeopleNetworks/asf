cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_cmsis_same70)

add_library(asf_sam_utils_cmsis_same70 STATIC
    source/templates/gcc/startup_same70.c
    source/templates/system_same70.c
    source/templates/system_same70.h
)
add_library(asf::sam::utils::cmsis::same70 ALIAS asf_sam_utils_cmsis_same70)

target_include_directories(asf_sam_utils_cmsis_same70 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/source/templates
)

target_link_libraries(asf_sam_utils_cmsis_same70
    PUBLIC
        asf::common::utils
)
