#include <stdio.h>
#include <stdlib.h>

#if defined(__linux__)

#include <unistd.h>
#include <fcntl.h>


#define Buffer_size 4096

void cat_fd(int fd) {
    char buffer[Buffer_size];

    ssize_t n;

    while((n = read(fd , buffer , Buffer_size)) > 0) {
        if (write(STDOUT_FILENO , buffer , n) != n) {
            perror("write");
            exit(1);
        }
    }

    if (n < 0) {
        perror("read");
        exit(1);
    }
}


void print_file(const char *filename) {
    FILE *fp = fopen(filename , "r");

    if (!fp) {
        perror(filename);
        return ;
    }
    int ch;

    while((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
}
int main ( int argc , char *argv[] ) {

    if (argc == 1) {
        cat_fd(STDIN_FILENO);
    } else {
        for(int i = 1 ; i < argc ;  i += 1){
            int fd = open(argv[i] , O_RDONLY);
            if (fd == -1) {
                perror(argv[i]);
                continue;
            }
            cat_fd(fd);

            if (close(fd) == -1)
                perror("close");
        }
    }

    return 0;
}

#elif defined(__windows__)

int main () {

    return 0;
}

#endif