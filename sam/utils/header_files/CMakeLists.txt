cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_header_files)

add_library(asf_sam_utils_header_files INTERFACE)
add_library(asf::sam::utils::header_files ALIAS asf_sam_utils_header_files)

target_include_directories(asf_sam_utils_header_files INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
