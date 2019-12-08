cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_lwip)

option(ASF_LWIP_ENABLE_DHCP "Enable DHCP support in LWIP" ON)
option(ASF_LWIP_ENABLE_NETIF "Enable netifapi functions in LWIP" ON)

if (NOT ASF_LWIP_VERSION)
    set(ASF_LWIP_VERSION 1.4.1)
endif()

add_subdirectory(lwip-port-${ASF_LWIP_VERSION}/${ASF_FAMILY_DIRECTORY})
add_subdirectory(lwip-${ASF_LWIP_VERSION}/src)
