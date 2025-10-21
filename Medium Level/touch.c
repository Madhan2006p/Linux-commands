#include <stdio.h>
#include <stdlib.h>


#if defined(__linux__) 

#include <unistd.h>


int main(int argc , char * argv[]) {
    if (argc < 2){
        printf("Usage: %s <filename>", argv[0]);
        return 1;
    }

    const char * filename = argv[1];
    
    if (access(filename , F_OK) == 0) printf("File is already exists : %s" , filename);
    else {
        FILE *fp = fopen(filename , "w");
        if (fp == NULL) perror("Error creating file");

        printf("File %s was created successfully!\n" , filename);
        fclose(fp);
    }

    
    return 0;
}


#elif defined(__windows__)




#endif