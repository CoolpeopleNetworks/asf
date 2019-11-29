cmake_minimum_required(VERSION 3.15)
project(utils_cmsis_sam4e)

add_library(utils_cmsis_sam4e STATIC
    source/templates/gcc/startup_sam4e.c
    source/templates/exceptions.c
    source/templates/exceptions.h
    source/templates/system_sam4e.c
    source/templates/system_sam4e.h
    )
add_library(ASF::startup_SAM4E ALIAS utils_cmsis_sam4e)

target_include_directories(utils_cmsis_sam4e PRIVATE include)
