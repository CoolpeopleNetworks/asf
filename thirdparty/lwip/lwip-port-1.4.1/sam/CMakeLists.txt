cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_lwip_port_1_4_1)

add_library(asf_thirdparty_lwip_port STATIC
    sys_arch.c
    netif/ethernetif_sam4.c
    netif/sam4e_gmac.c
)
add_library(asf::thirdparty::lwip::port ALIAS asf_thirdparty_lwip_port)

target_include_directories(
    asf_thirdparty_lwip_port
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_thirdparty_lwip_port
    PUBLIC 
        asf::common::boards
        asf::sam::utils
        asf::sam::drivers::pmc
        asf::sam::drivers::gmac
        asf::common::services::clock
        asf::sam::components::ethernet_phy
        asf::thirdparty::freertos
        asf::thirdparty::lwip
)
