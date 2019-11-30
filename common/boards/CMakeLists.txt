cmake_minimum_required(VERSION 3.15)
project(asf_common_boards)

add_library(asf_common_boards INTERFACE)
add_library(asf::common::boards ALIAS asf_common_boards)

target_include_directories(asf_common_boards INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(asf_common_boards INTERFACE asf::${ASF_FAMILY_DIRECTORY}::utils)
