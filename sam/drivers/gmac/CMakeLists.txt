cmake_minimum_required(VERSION 3.15)
project(asf_sam_drivers_gmac)

add_library(asf_sam_drivers_gmac_KSZ8051MNL STATIC
    gmac_phy.c
    gmac_raw.c
    gmac_raw.h
    gmac.h
)
add_library(asf::sam::drivers::gmac::KSZ8051MNL ALIAS asf_sam_drivers_gmac_KSZ8051MNL)

target_include_directories(asf_sam_drivers_gmac_KSZ8051MNL
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_KSZ8051MNL
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)

add_library(asf_sam_drivers_gmac_KSZ8061RNB STATIC
    gmac_phy.c
    gmac_raw_2.c
    gmac_raw_2.h
    gmac.h
)
add_library(asf::sam::drivers::gmac::KSZ8061RNB ALIAS asf_sam_drivers_gmac_KSZ8061RNB)

target_include_directories(asf_sam_drivers_gmac_KSZ8061RNB
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_sam_drivers_gmac_KSZ8061RNB
    PUBLIC 
        asf::sam::utils
        asf::common::boards
)
