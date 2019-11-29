cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_cmsis_sam4e)

add_library(asf_sam_utils_cmsis_sam4e STATIC
    source/templates/gcc/startup_sam4e.c
    source/templates/exceptions.c
    source/templates/exceptions.h
    source/templates/system_sam4e.c
    source/templates/system_sam4e.h
    )
add_library(ASF::startup_SAM4E ALIAS asf_sam_utils_cmsis_sam4e)

target_include_directories(asf_sam_utils_cmsis_sam4e PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/source ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(asf_sam_utils_cmsis_sam4e PRIVATE asf_thirdparty_cmsis)