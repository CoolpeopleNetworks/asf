cmake_minimum_required(VERSION 3.15)
project(asf_sam_components_ethernet_phy_ksz8081mnx)

add_library(asf_sam_components_ethernet_phy_ksz8081mnx STATIC
    ethernet_phy.c
    ethernet_phy.h
)
add_library(asf::sam::components::ethernet_phy::ksz8081mnx ALIAS asf_sam_components_ethernet_phy_ksz8081mnx)

target_include_directories(asf_sam_components_ethernet_phy_ksz8081mnx 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_components_ethernet_phy_ksz8081mnx 
    PUBLIC 
        asf::sam::utils
        asf::sam::drivers::gmac
)
