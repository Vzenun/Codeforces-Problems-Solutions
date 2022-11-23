#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h> //linux specific library
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>
#include <pthread.h>
#include <dirent.h> //Used for handling directory files
#include <errno.h> //For EXIT codes and error handling

int main(int argc,char * argv[]){
    if(strcmp(argv[2],"-i")==0){
        char check;
        printf("rm: remove regular empty file %s? ", argv[1]);
        scanf("%c", &check);
        if (check == 'y'){
            int c = remove(argv[1]);
            if (c !=0){
                printf("cannot remove %s:\n",argv[1]);
            }
        }
    }
    else if(strcmp(argv[2],"-f")==0){
        char check='y';
        if (check == 'y'){
            int c = remove(argv[1]);
            if (c !=0){
                printf("cannot remove %s:\n",argv[1]);
            }
        }
    }

}