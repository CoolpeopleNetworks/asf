cmake_minimum_required(VERSION 3.15)
project(asf_common_utils)

add_subdirectory(stdio)

add_library(asf_common_utils INTERFACE)
add_library(asf::common::utils ALIAS asf_common_utils)

target_include_directories(asf_common_utils INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})