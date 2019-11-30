cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_preprocessor)

add_library(asf_sam_utils_preprocessor INTERFACE)
add_library(asf::sam::utils::preprocessor ALIAS asf_sam_utils_preprocessor)

target_include_directories(asf_sam_utils_preprocessor INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
