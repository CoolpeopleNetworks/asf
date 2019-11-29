cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_fatfs)

add_subdirectory(fatfs-port-r0.09)

add_library(asf_thirdparty_fatfs STATIC
    fatfs-r0.09/src/diskio.h
    fatfs-r0.09/src/ff.c
    fatfs-r0.09/src/ff.h
    fatfs-r0.09/src/ffconf.h
    fatfs-r0.09/src/integer.h
)
add_library(asf::thirdparty::fatfs ALIAS asf_thirdparty_fatfs)

target_include_directories(asf_thirdparty_fatfs 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/fatfs-r0.09/src
)

target_link_libraries(asf_thirdparty_fatfs
    PUBLIC
        asf::thirdparty::fatfs::port
)
