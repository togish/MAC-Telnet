#ifndef _UDP_H
#define _UDP_H 1
extern int sendCustomUDP(const int socket, const int ifindex, const unsigned char *sourcemac, const unsigned char *destmac, const struct in_addr *sourceip, const int sourceport, const struct in_addr *destip, const int destport, const unsigned char *data, const int datalen);
#endif
