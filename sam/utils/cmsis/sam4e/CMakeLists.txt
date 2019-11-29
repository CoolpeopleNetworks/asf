cmake_minimum_required(VERSION 3.15)
project(sam_utils_cmsis_sam4e)

add_library(sam_utils_cmsis_sam4e STATIC
    source/templates/gcc/startup_sam4e.c
    source/templates/exceptions.c
    source/templates/exceptions.h
    source/templates/system_sam4e.c
    source/templates/system_sam4e.h
    )
add_library(ASF::startup_SAM4E ALIAS sam_utils_cmsis_sam4e)

target_include_directories(sam_utils_cmsis_sam4e PRIVATE include)
