#include <stdio.h>
#include <stdlib.h>


#if defined(__linux__)

    int main(int argc , char * argv[]) {
        
        if (argc != 3) {
            printf("Usage: %s <src> <dest>\n", argv[0]);
            return 1;
        }

        if (rename(argv[1] , argv[2]) != 0 ) {
            perror("Error moving file");
            return 1;
        }

        printf("Moved '%s' to '%s' successfully!\n", argv[1], argv[2]);

        return 0;
    }


#elif defined(__windows__)




#endif