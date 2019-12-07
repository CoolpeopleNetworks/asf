cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_freertos)

if (NOT ASF_FREERTOS_VERSION)
    set(ASF_FREERTOS_VERSION 10.0.0)
endif()

add_subdirectory(freertos-${ASF_FREERTOS_VERSION})
