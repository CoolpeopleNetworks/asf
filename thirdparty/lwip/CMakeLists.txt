cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_lwip)

option(ASF_LWIP_ENABLE_DHCP "Enable DHCP support in LWIP" ON)
option(ASF_LWIP_ENABLE_NETIF "Enable netifapi functions in LWIP" ON)

add_subdirectory(lwip-port-1.4.1/${ASF_FAMILY_DIRECTORY})
add_subdirectory(lwip-1.4.1/src)
