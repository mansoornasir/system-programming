#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<sys/utsname.h>

int main() {
    struct utsname buff;
    int errno = 0;
    if(uname(&buff) !=0) {
        perror("Unable to get system information");
        exit(EXIT_FAILURE);
    }
    printf("System name: %s\n", buff.sysname);
    printf("Node name: %s\n", buff.nodename);
    printf("Release: %s\n", buff.release);
    printf("Version: %s\n", buff.version);
    printf("Machine: %s\n", buff.machine);
    return 0;
}