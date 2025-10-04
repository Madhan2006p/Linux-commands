#include <stdio.h>
#include <stdlib.h>

#if defined(__linux__)
    #include <unistd.h>
#elif defined(_WIN32)
    #include <direct.h>
#else
    #error "Unsupported platform"
#endif


int main() {
    char cmd[1024];

    if(getcwd(cmd , sizeof(cmd)) != NULL)
        printf("%s\n" ,cmd);
    else   
        printf("getcmd() error");

    return 0;
}