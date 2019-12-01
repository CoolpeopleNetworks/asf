cmake_minimum_required(VERSION 3.15)
project(asf_thirdparty_lwip_1_4_1)

add_library(asf_thirdparty_lwip_1_4_1 STATIC
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
    core/core/mem.c
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
)
add_library(asf::thirdparty::lwip::1.4.1 ALIAS asf_thirdparty_lwip_1_4_1)

target_include_directories(
    asf_thirdparty_lwip_1_4_1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/module_config
)

target_link_libraries(
    asf_thirdparty_lwip_1_4_1
    PUBLIC 
        asf::common::boards
        asf::sam::utils
        asf::thirdparty::lwip::1.4.1::port
)
