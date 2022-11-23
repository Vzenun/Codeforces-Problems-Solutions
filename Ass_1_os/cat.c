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

//Cat main function is to display the content of the particular text file in printed form on the terminal
// here argc refers to the number of argument 
int main(int argc,char *argv[]){
    if(strcmp(argv[2],"-n")==0){
        //printf("%s",argv[1]);
        FILE * file;
        file=fopen(argv[1],"r"); // here argv[1] refers to the file name.
        if (file == NULL){
            printf("\nNo such file");
            fclose(file);
            return 0;
        }
        else{
            char text[124];
            int line=1;
            while((fgets(text,124,file))!=NULL){
                printf("%d %s",line,text);
                line++;
            }
        }
        fclose(file);
        return 0;
    }
    else if(strcmp(argv[2],"-e")==0){
        //printf("Hello");
        //printf("%s",argv[1]);
        FILE * file;
        file=fopen(argv[1],"r"); // here argv[1] refers to the file name.
        if (file == NULL){
            printf("\nNo such file");
            fclose(file);
            return 0;
        }
        else{
            char text[124];
            while((fgets(text,124,file))!=NULL){
                printf("%s",text);
            }
        }
        fclose(file);
        return 0;
    }
}