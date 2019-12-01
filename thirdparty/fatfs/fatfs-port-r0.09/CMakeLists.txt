cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_fatfs_fatfs_port)

add_subdirectory(${ASF_FAMILY_DIRECTORY})

add_library(asf_thirdparty_fatfs_port STATIC
    diskio.c
)
add_library(asf::thirdparty::fatfs::port ALIAS asf_thirdparty_fatfs_port)

target_include_directories(asf_thirdparty_fatfs_port 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(asf_thirdparty_fatfs
    PUBLIC
        asf::thirdparty::fatfs::port::${ASF_FAMILY_DIRECTORY}
)
