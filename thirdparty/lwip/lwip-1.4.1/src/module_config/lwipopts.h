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

#define netifINTERFACE_TASK_STACK_SIZE  4096

#include <errno.h>

#endif
