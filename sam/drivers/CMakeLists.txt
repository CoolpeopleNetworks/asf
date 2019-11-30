cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers)

add_subdirectory(pmc)

if (ASF_ENABLE_CAN)
    add_subdirectory(can)
endif()
