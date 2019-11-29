cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_cmsis)

add_library(asf_thirdparty_cmsis INTERFACE)

target_include_directories(asf_thirdparty_cmsis INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)