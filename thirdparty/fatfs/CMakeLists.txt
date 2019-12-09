cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_fatfs)

add_library(asf_thirdparty_fatfs STATIC
    fatfs-r0.09/src/diskio.h
    fatfs-r0.09/src/ff.c
    fatfs-r0.09/src/ff.h
    fatfs-r0.09/src/ffconf.h
    fatfs-r0.09/src/integer.h
    fatfs-r0.09/src/option/ccsbcs.c
    fatfs-r0.09/src/option/syscall.c

    fatfs-port-r0.09/diskio.c
    fatfs-port-r0.09/${ASF_FAMILY_DIRECTORY}/fattime_rtc.c
)
add_library(asf::thirdparty::fatfs ALIAS asf_thirdparty_fatfs)

target_include_directories(asf_thirdparty_fatfs 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/fatfs-r0.09/src
)

target_link_libraries(asf_thirdparty_fatfs
    PUBLIC
        asf::common::services::storage::ctrl_access
        asf::${ASF_FAMILY_DIRECTORY}::rtc
)
