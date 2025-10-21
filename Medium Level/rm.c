#include <stdio.h>
#include <stdlib.h>


#if defined(__linux__)

#include <unistd.h>

int main(int argc , char * argv[] ) {
    if (argc < 2) {
        printf("Usage: %s <filename> \n" , argv[0]);
        return 1;
    }

    for(int i = 1 ; i < argc ; i ++ ){
        if (remove(argv[i]) == 0) {
            printf("Deleted: %s\n" , argv[i]);
        } else {
            perror("Error deleting file");
        }
    }
    return 0;
}



#elif defined(__windows__)




#endif