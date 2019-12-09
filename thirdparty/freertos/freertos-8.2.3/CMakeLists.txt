cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_freertos_8_2_3)

add_library(asf_thirdparty_freertos STATIC
    Source/croutine.c
    Source/event_groups.c
    Source/list.c
    Source/queue.c
    Source/tasks.c
    Source/timers.c

    Source/portable/GCC/ARM_CM4F/port.c
    Source/portable/GCC/ARM_CM4F/portmacro.h
    Source/portable/MemMang/heap_5.c
)
add_library(asf::thirdparty::freertos ALIAS asf_thirdparty_freertos)

target_include_directories(asf_thirdparty_freertos
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Source
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/include
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/portable/GCC/ARM_CM4F
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(asf_thirdparty_freertos
    PUBLIC
        asf::common::boards
        asf::sam::boards
)
