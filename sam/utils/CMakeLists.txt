cmake_minimum_required(VERSION 3.15)
project(sam_utils)

add_library(sam_utils INTERFACE)
target_include_directories(sam_utils INTERFACE ${CMAKE_CURRENT_SOURCE_DIRECTORY})

add_subdirectory(cmsis/${ASF_CHIP_FAMILY})
