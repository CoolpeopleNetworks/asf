cmake_minimum_required(VERSION 3.15)
project(asf_sam_components_ethernet_phy_ksz8081rna)

add_library(asf_sam_components_ethernet_phy_ksz8081rna STATIC
    ethernet_phy.c
    ethernet_phy.h
)
add_library(asf::sam::components::ethernet_phy::ksz8081rna ALIAS asf_sam_components_ethernet_phy_ksz8081rna)

target_include_directories(asf_sam_components_ethernet_phy_ksz8081rna
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
    asf_sam_components_ethernet_phy_ksz8081rna 
    PUBLIC 
        asf::sam::utils
        asf::sam::drivers::gmac
        asf::sam::drivers::pio
)
