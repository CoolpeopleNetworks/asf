cmake_minimum_required(VERSION 3.15)
project(asf_sam_utils_syscalls)

add_library(asf_sam_utils_syscalls STATIC
    gcc/syscalls.c
)
add_library(asf::sam::utils::syscalls ALIAS asf_sam_utils_syscalls)

#target_link_libraries(
#    asf_sam_utils_syscalls
#    INTERFACE 
#        asf::sam::utils::fpu
#        asf::sam::utils::header_files 
#        asf::sam::utils::preprocessor 
#        asf::sam::utils::cmsis::${ASF_CHIP_FAMILY}
#        asf::sam::utils::syscalls
#)
