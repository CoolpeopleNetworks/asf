cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_freertos_8_2_3)

add_library(asf_thirdparty_freertos INTERFACE)
add_library(asf::thirdparty::freertos ALIAS asf_thirdparty_freertos)

target_include_directories(asf_thirdparty_freertos
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/include
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/portable/GCC/ARM_CM4F
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

add_library(asf_thirdparty_freertos_8_2_3_portable STATIC
    Source/portable/GCC/ARM_CM4F/port.c
    Source/portable/GCC/ARM_CM4F/portmacro.h
)
add_library(asf::thirdparty::freertos::8.2.3::portable ALIAS asf_thirdparty_freertos_8_2_3_portable)

target_include_directories(asf_thirdparty_freertos_8_2_3_portable
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Source/portable/GCC/ARM_CM4F
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(asf_thirdparty_freertos_8_2_3_portable
    PUBLIC
        asf::thirdparty::freertos
)

add_library(asf_thirdparty_freertos_8_2_3 STATIC
    Source/croutine.c
    Source/event_groups.c
    Source/list.c
    Source/queue.c
    Source/tasks.c
    Source/timers.c
)
add_library(asf::thirdparty::freertos::8.2.3 ALIAS asf_thirdparty_freertos_8_2_3)

target_include_directories(asf_thirdparty_freertos_8_2_3 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Source
)

target_link_libraries(asf_thirdparty_freertos_8_2_3
    PUBLIC
        asf::thirdparty::freertos
        asf::thirdparty::freertos::8.2.3::portable
)
