#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__linux__)

#include <dirent.h>

    int main(int argc , char *argv[]) {

        DIR *dir;
        struct  dirent *dp;

        // printf("%d\n" , argc);
        if (argc > 1) {
            int search = 0;
            char filename[1024];
            if (strcmp( argv[0] , "--search")) {
                strcpy(filename , argv[2]);
                if (( dir = opendir(".")) == NULL) {
                    perror("Cannot open\n");
                    return 1;
                }  
                int found = 0;
                while ((dp = readdir (dir)) != NULL) {
                    if ((strcmp(dp->d_name , ".") == 0) || (strcmp(dp->d_name , "..") == 0));
                    else{ if (strcmp(dp->d_name , filename) == 0) printf("%s\n" , dp->d_name); closedir(dir); return 0; }
                }
                if (found == 0) printf("Not found\n");
                closedir(dir);
            } else {
                printf("Invalid Mode\n");
                return 1;
            }

        } else {

            if (( dir = opendir(".")) == NULL) {
                perror("Cannot open\n");
                return 1;
            }

            while ((dp = readdir (dir)) != NULL) {
                if ((strcmp(dp->d_name , ".") == 0) || (strcmp(dp->d_name , "..") == 0));
                else printf("%s " , dp->d_name);
            }
            printf("\n");
            closedir(dir);
        }
        
        return 0;
    }


// #elif defined(_WIN32)


#endif