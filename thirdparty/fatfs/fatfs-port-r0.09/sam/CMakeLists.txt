cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_fatfs_port_sam)

add_library(asf_thirdparty_fatfs_port_sam STATIC
    fattime_rtc.c
)
add_library(asf::thirdparty::fatfs::port::sam ALIAS asf_thirdparty_fatfs_port_sam)

target_include_directories(asf_thirdparty_fatfs_port_sam 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(asf_thirdparty_fatfs_port_sam
    PUBLIC
        asf::sam::drivers::rtc
)
