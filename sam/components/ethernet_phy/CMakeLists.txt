cmake_minimum_required(VERSION 3.15)
project(asf_sam_components_ethernet_phy)

add_library(asf_sam_components_ethernet_phy INTERFACE)
add_library(asf::sam::components::ethernet_phy ALIAS asf_sam_components_ethernet_phy)

if (ASF_ETHERNET_PHY_MODEL)
    add_subdirectory(${ASF_ETHERNET_PHY_MODEL})

    target_link_libraries(asf_sam_components_ethernet_phy 
        INTERFACE
        asf::sam::components::ethernet_phy::${ASF_ETHERNET_PHY_MODEL}
    )
endif()
