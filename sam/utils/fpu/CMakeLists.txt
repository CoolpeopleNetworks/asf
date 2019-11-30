cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_fpu)

add_library(asf_sam_utils_fpu INTERFACE)
add_library(asf::sam::utils::fpu ALIAS asf_sam_utils_fpu)

target_include_directories(asf_sam_utils_fpu INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(asf_sam_utils_fpu INTERFACE asf::common::utils)