cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_freertos)

if (NOT ASF_FREERTOS_VERSION)
    set(ASF_FREERTOS_VERSION 10.0.0)
endif()

if (NOT ASF_FREERTOS_HEAP_SOURCE_FILENAME)
    set(ASF_FREERTOS_HEAP_SOURCE_FILENAME heap_1.c)
endif()

if (NOT ASF_FREERTOS_HEAP_TOTAL_SIZE)
    set(ASF_FREERTOS_HEAP_TOTAL_SIZE 512)
endif()

add_subdirectory(freertos-${ASF_FREERTOS_VERSION})
