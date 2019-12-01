cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_freertos_8_0_1)

add_library(asf_thirdparty_freertos INTERFACE)
add_library(asf::thirdparty::freertos ALIAS asf_thirdparty_freertos)

target_include_directories(asf_thirdparty_freertos
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/include
)

add_library(asf_thirdparty_freertos_8_0_1_portable STATIC
    Source/portable/GCC/ARM_CM4F/port.c
    Source/portable/GCC/ARM_CM4F/portmacro.h
)
add_library(asf::thirdparty::freertos::8.0.1::portable ALIAS asf_thirdparty_freertos_8_0_1_portable)

target_include_directories(asf_thirdparty_freertos_8_0_1_portable
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/portable/GCC/ARM_CM4F
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(asf_thirdparty_freertos_8_0_1_portable
    PUBLIC
        asf::thirdparty::freertos
)

add_library(asf_thirdparty_freertos_8_0_1 STATIC
    Source/croutine.c
    Source/event_groups.c
    Source/list.c
    Source/queue.c
    Source/tasks.c
    Source/timers.c
)
add_library(asf::thirdparty::freertos::8.0.1 ALIAS asf_thirdparty_freertos_8_0_1)

target_include_directories(asf_thirdparty_freertos_8_0_1 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Source
)

target_link_libraries(asf_thirdparty_freertos_8_0_1
    PUBLIC
        asf::thirdparty::freertos
        asf::thirdparty::freertos::8.0.1::portable
)
