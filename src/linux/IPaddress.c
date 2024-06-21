#include "../../include/dec.h"
#include "../../include/common.h"

static void checkHostName(int signal){
	int errorCode = errno;
	if(signal == -1){
		//use printf for now
		printf("%s\n",strerror(errorCode));
		exit(-1);
	}
	printf("\nNice\n");
}

static void isHostValid(struct hostent* Host){
	//check if the struct for the host is valid
	int errorCode = errno;
	if(!Host){
		printf("%s\n",strerror(errorCode));
		exit(-1);
	}
	printf("\nNice\n");
}

void getLocalMachineIPAddress(void){
    char localMachineHostname[HOSTNAMELENGTH];
    struct hostent *Host;
    /*to get the hostname, according to the linux specification
    we can use the gethostname() function
    https://www.man7.org/linux/man-pages/man2/gethostname.2.html
    */

   /*handling error in C
    https://www.geeksforgeeks.org/error-handling-in-c/
   */
    checkHostName(gethostname(localMachineHostname,HOSTNAMELENGTH));
    Host = gethostbyname(localMachineHostname);
    isHostValid(Host);

	printf("\nHost Name is: %s\n",localMachineHostname);
	printf("\nHost Address is: %s\n", inet_ntoa(*((struct in_addr*) Host->h_addr_list[0])));
    //return localMachineHostname;
}
