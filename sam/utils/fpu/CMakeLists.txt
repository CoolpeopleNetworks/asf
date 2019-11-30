cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_fpu)

add_library(asf_sam_utils_fpu INTERFACE)
target_include_directories(asf_sam_utils_fpu INTERFACE ${CMAKE_CURRENT_SOURCE_DIRECTORY})
