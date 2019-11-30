cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils)

add_library(asf_sam_utils INTERFACE)
add_library(asf::sam::utils ALIAS asf_sam_utils)

target_include_directories(asf_sam_utils INTERFACE ${CMAKE_CURRENT_SOURCE_DIRECTORY})

add_subdirectory(fpu)
add_subdirectory(cmsis/${ASF_CHIP_FAMILY})

target_link_libraries(asf_sam_utils INTERFACE asf::sam::utils::fpu asf::sam::utils::cmsis::${ASF_CHIP_FAMILY})
