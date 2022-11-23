#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
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
    //Now first we need to check
    //printf("%d",argc);
    int c;
    //printf("Hi yoyoyoyoyoyo");
    c=mkdir(argv[1],0777);
    if(c==-1 && strcmp(argv[2],"-v")==0){
        printf("Error in creating the directory or dirctory already exists with the same name.\n");
    }
    else if(strcmp(argv[2],"-v")==0){
        printf("Directory: '%s' has been created successfully\n",argv[1]);
    }
}