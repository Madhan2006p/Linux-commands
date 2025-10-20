#include <stdio.h>
#include <stdlib.h>


#if defined(__linux__)

#include <unistd.h>
#include <fcntl.h>

void fileReadAndWrite(const char * parentfile , const char * childfile) {

    FILE *parent = fopen(parentfile , "r");
    FILE *child = fopen(childfile , "a");

    char data[100];

    if (parent == NULL)
        printf("No File found .!");
    else {
        while (fgets(data , 100 , parent) != NULL) {
            fputs(data , child);
        }
    }

}


int main(int argc , char * argv[]) {

    fileReadAndWrite(argv[1] , argv[2]);
    return 0;
}




#elif defined(__windows__)



#endif 