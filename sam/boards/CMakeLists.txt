cmake_minimum_required(VERSION 3.15)
project(asf_sam_boards)

add_subdirectory(${ASF_BOARD})

add_library(asf_sam_boards INTERFACE)
add_library(asf::sam::boards ALIAS asf_sam_boards)

target_include_directories(asf_sam_boards INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
