cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils)

add_subdirectory(fpu)
add_subdirectory(header_files)
add_subdirectory(preprocessor)
add_subdirectory(cmsis/${ASF_CHIP_FAMILY})
add_subdirectory(syscalls)

add_library(asf_sam_utils INTERFACE)
add_library(asf::sam::utils ALIAS asf_sam_utils)

target_include_directories(asf_sam_utils INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(
    asf_sam_utils 
    INTERFACE 
        asf::sam::utils::fpu
        asf::sam::utils::header_files 
        asf::sam::utils::preprocessor 
        asf::sam::utils::cmsis::${ASF_CHIP_FAMILY}
        asf::sam::utils::syscalls
)
