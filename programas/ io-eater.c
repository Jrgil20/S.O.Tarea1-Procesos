#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main(){
    FILE *fp;
    pid_t pid;
    int i;
    double f;
    f=765476.0;
    for (i=1; i<30000000; i++) {
        fp=fopen("borra.txt", "w");
        fprintf(fp, "Testing...\n");
        fclose(fp);
        if ((pid = fork()) < 0) { /* apply fork and check for error */
            perror ("error in fork");
            exit (1);
        }
        if (0 == pid) { /* processing for child */
            exit(1);
        } else {
        }
    }
    exit(1);
}
