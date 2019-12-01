cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_lwip_port_1_4_1)

add_library(asf_thirdparty_lwip_port_1_4_1 STATIC
    sys_arch.c
    netif/ethernetif_sam4.c
    netif/sam4e_gmac.c
)
add_library(asf::thirdparty::lwip::1.4.1::port ALIAS asf_thirdparty_lwip_port_1_4_1)

target_include_directories(
    asf_thirdparty_lwip_port_1_4_1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(
    asf_thirdparty_lwip_port_1_4_1
    PUBLIC 
        asf::common::boards
        asf::sam::utils
        asf::thirdparty::freertos
        asf::thirdparty::lwip::1.4.1
)
