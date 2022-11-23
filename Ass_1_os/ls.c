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

int compare2(char a[],char b[])  
{  
    int flag=0,i=0;  // integer variables declaration  
    while(a[i]!='\0' &&b[i]!='\0')  // while loop  
    {  
        if(a[i]!=b[i])  
        {  
            flag=1;  
            break;  
        }  
        i++;  
    }  
    if(flag==0){
        return 0;
        } 
    else{
        return 1;  
    }
}  

int main(int argc,char * argv[]){
    if(argv[1]==NULL){
        DIR * directory=opendir("."); //here . means i want to see all the current files in the dir that we opened
        if(directory!=NULL){
            struct dirent* ent_name;
            ent_name=readdir(directory);
            while(ent_name!=NULL){
                if(compare2(&ent_name->d_name[0],".")!=0 ){
                    printf("%s   ",ent_name->d_name);
                }
                ent_name=readdir(directory);
            }
            closedir(directory);
            //printf("VB");
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(compare2(argv[1],"-1")==0){
        DIR * directory=opendir("."); //here . means i want to see all the current files in the dir that we opened
        if(directory!=NULL){
            struct dirent* ent_name;
            ent_name=readdir(directory);
            while(ent_name!=NULL){
                if(compare2(&ent_name->d_name[0],".")!=0 ){
                    printf("%s\n",ent_name->d_name);
                }
                ent_name=readdir(directory);
            }
            closedir(directory);
            //printf("VB");
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(compare2(argv[1],"-m")==0){
        DIR * directory=opendir("."); //here . means i want to see all the current files in the dir that we opened
        if(directory!=NULL){
            struct dirent* ent_name;
            ent_name=readdir(directory);
            while(ent_name!=NULL){
                if(compare2(&ent_name->d_name[0],".")!=0 ){
                    printf("%s,",ent_name->d_name);
                }
                ent_name=readdir(directory);
            }
            closedir(directory);
            //printf("VB");
            return 1;
        }
        else{
            return 0;
        }
    }
    // printf("Kaise ho bhai \n");
    // return 0;
}