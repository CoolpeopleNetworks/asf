cmake_minimum_required(VERSION 3.15)
project(asf_sam_components_ethernet_phy_ksz8081mnx)

add_library(asf_sam_components_ethernet_phy INTERFACE)
add_library(asf::sam::components::ethernet_phy ALIAS asf_sam_components_ethernet_phy)

target_include_diretories(asf_sam_components_ethernet_phy
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(asf_sam_components_ethernet_phy_ksz8081mnx STATIC
    ethernet_phy.c
    ethernet_phy.h
)
add_library(asf::sam::components::ethernet_phy::ksz8081mnx ALIAS asf_sam_components_ethernet_phy_ksz8081mnx)

target_link_libraries(
    asf_sam_components_ethernet_phy_ksz8081mnx 
    PUBLIC 
        asf::sam::utils
        asf::sam::drivers::gmac
        asf::sam::components::ethernet_phy
)
