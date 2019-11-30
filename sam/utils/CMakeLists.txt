cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils)

add_library(asf_sam_utils INTERFACE)
target_include_directories(asf_sam_utils INTERFACE ${CMAKE_CURRENT_SOURCE_DIRECTORY})

add_subdirectory(fpu)
add_subdirectory(cmsis/${ASF_CHIP_FAMILY})

target_link_libraries(asf_sam_utils INTERFACE asf_sam_utils_fpu asf_sam_utils_cmsis_${ASF_CHIP_FAMILY})
