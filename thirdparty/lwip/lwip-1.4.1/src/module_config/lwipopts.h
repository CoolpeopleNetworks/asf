#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

#include "conf_lwip_threads.h"

#define LWIP_AUTOIP                 1
#define LWIP_DHCP_AUTOIP_COOP       1
#define LWIP_DHCP_AUTOIP_COOP_TRIES 4
#define LWIP_IGMP                   1
#define LWIP_RAND() rand()
#define LWIP_DNS                    1
#define LWIP_SO_RCVTIMEO            1
#define LWIP_SO_SNDTIMEO            1
#define LWIP_NETIF_STATUS_CALLBACK  1

#include <errno.h>

#endif
