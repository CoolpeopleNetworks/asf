#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

#include "conf_lwip_threads.h"

#define LWIP_DHCP                   1
#define LWIP_AUTOIP                 1
#define LWIP_DHCP_AUTOIP_COOP       1
#define LWIP_DHCP_AUTOIP_COOP_TRIES 4
#define LWIP_IGMP                   1
#define LWIP_RAND() rand()
#define LWIP_DNS                    1
#define LWIP_SO_RCVTIMEO            1
#define LWIP_SO_SNDTIMEO            1
#define LWIP_NETIF_STATUS_CALLBACK  1
#define LWIP_NETIF_HOSTNAME         1
#define LWIP_NETIF_API				1

#define NO_SYS                		0
#define LWIP_RAW                  	0
#define LWIP_NETIF_STATUS_CALLBACK	1
#define LWIP_NETIF_LINK_CALLBACK    1

#define LWIP_NETCONN            	1
#define LWIP_SOCKET             	1

#define LWIP_TCP_KEEPALIVE          1

#define SO_REUSE                    1

#define TCPIP_MBOX_SIZE             16
#define DEFAULT_ACCEPTMBOX_SIZE     16
#define DEFAULT_RAW_RECVMBOX_SIZE   16
#define DEFAULT_TCP_RECVMBOX_SIZE   16
#define DEFAULT_UDP_RECVMBOX_SIZE   16

#define MEM_LIBC_MALLOC             1
#define MEMP_MEM_MALLOC             0
#define MEM_USE_POOLS               1

#define MEMP_NUM_TCP_PCB            32
#define MEMP_NUM_TCP_PCB_LISTEN     16
#define MEMP_NUM_PBUF               128
#define MEMP_NUM_NETBUF             32
#define MEMP_NUM_NETCONN            32

#define MEMP_OVERFLOW_CHECK         2

#define PBUF_POOL_SIZE              10
#define MEM_ALIGNMENT               4
#define PBUF_POOL_BUFSIZE           1536

#define LWIP_ERROR(message, expression, handler) { if (!(expression)) { abort(); } }
#define LWIP_PLATFORM_ASSERT(message) { abort(); }

#ifndef LWIP_PLATFORM_DIAG
#define LWIP_PLATFORM_DIAG(message) ;
#endif

#define SYS_LIGHTWEIGHT_PROT        1

#include <errno.h>

// DEBUGGING
#define LWIP_DBG_MIN_LEVEL              LWIP_DBG_LEVEL_ALL
#define LWIP_DBG_TYPES_ON               LWIP_DBG_ON
#define DHCP_DEBUG                      LWIP_DBG_ON
#define AUTOIP_DEBUG                    LWIP_DBG_ON
#define UDP_DEBUG                       LWIP_DBG_ON
#define MEM_DEBUG                       LWIP_DBG_ON
#define MEMP_DEBUG                      LWIP_DBG_ON

#endif
