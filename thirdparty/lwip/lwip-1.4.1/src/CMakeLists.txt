cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_lwip_1_4_1)

set(CMAKE_BUILD_TYPE Debug) // BUGBUG COOLPEOPLE

add_library(asf_thirdparty_lwip STATIC
    api/api_lib.c
    api/api_msg.c
    api/err.c
    api/netbuf.c
    api/netdb.c
    api/netifapi.c
    api/sockets.c
    api/tcpip.c

    core/ipv4/autoip.c
    core/ipv4/icmp.c
    core/ipv4/igmp.c
    core/ipv4/inet_chksum.c
    core/ipv4/inet.c
    core/ipv4/ip_addr.c
    core/ipv4/ip_frag.c
    core/ipv4/ip.c

    core/def.c
    core/dhcp.c
    core/dns.c
    core/lwip_init.c
    core/lwip_timers_141.c
    core/mem.c
    core/memp.c
    core/netif.c
    core/pbuf.c
    core/raw.c
    core/stats.c
    core/sys.c
    core/tcp_in.c
    core/tcp_out.c
    core/tcp.c
    core/udp.c

    netif/etharp.c
    netif/ethernetif.c

    ../../lwip-port-1.4.1/sam/sys_arch.c
    ../../lwip-port-1.4.1/sam/netif/ethernetif_sam4.c
    ../../lwip-port-1.4.1/sam/netif/sam4e_gmac.c
)
add_library(asf::thirdparty::lwip ALIAS asf_thirdparty_lwip)

target_include_directories(
    asf_thirdparty_lwip
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/include/ipv4
        ${CMAKE_CURRENT_SOURCE_DIR}/include/posix
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
        ${CMAKE_CURRENT_SOURCE_DIR}/../../lwip-port-1.4.1/sam/include
        ${CMAKE_CURRENT_SOURCE_DIR}/../../lwip-port-1.4.1/sam/module_config
)

target_link_libraries(
    asf_thirdparty_lwip
    PUBLIC 
        asf::common::boards
        asf::thirdparty::freertos
        asf::sam::utils
        asf::sam::drivers::pmc
        asf::sam::drivers::gmac
        asf::common::services::clock
        asf::sam::components::ethernet_phy
        asf::common::services::ioport
)

if (ASF_LWIP_ENABLE_DHCP)
    target_compile_definitions(asf_thirdparty_lwip PRIVATE LWIP_DHCP=1)
endif()

if (ASF_LWIP_ENABLE_NETIF)
    target_compile_definitions(asf_thirdparty_lwip PRIVATE LWIP_NETIF_API=1)
endif()