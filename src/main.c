//get 'this' device local IP address
#include"../include/common.h"
#include"../include/dec.h"
int main(int argc, char **args){
#ifdef _WIN32
        //for windows OS
    printf("Windows platform detected");
#elif __linux__
    //for linux

    //here we will get the device hostname

    printf("Linux platform detected\n");

   getLocalMachineIPAddress();
#else
    printf("Platform not supported\n")
#endif

    return 0;
}
