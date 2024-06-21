#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#ifdef __linux__
	#include<unistd.h>
	#include<netdb.h>
	#include<sys/socket.h>
	#include<netinet/in.h>
	#include<arpa/inet.h>
#endif
#ifndef HOSTNAMELENGTH
    #define HOSTNAMELENGTH 1024
#endif
