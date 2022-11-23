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
#include <time.h>

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

char *Day_in_string(int day_num){
    switch(day_num){
        case 0:
            return "Sun";
            break; 
        case 1:    
            return "Mon";
            break;        
        case 2:
            return "Tue"; 
            break;    
        case 3:    
            return "Wed";
            break;  
        case 4:    
            return "Thu";
            break; 
        case 5:
            return "Fri";
            break;  
        default:    
            return "Sat";
            break;
    }    
}
char *Month_in_string(int month_num){
    switch(month_num){    
        case 0:
            return "Jan";
            break;   
        case 1:    
            return "Feb";  
            break;       
        case 2:
            return "Mar";
            break;     
        case 3:    
            return "Apr";
            break;  
        case 4:    
            return "May";
            break; 
        case 5:
            return "Jun";
            break;     
        case 6:    
            return "Jul";
            break;         
        case 7:
            return "Aug";
            break;     
        case 8:    
            return "Sep";
            break;    
        case 9:    
            return "Oct";
            break;
        case 10:    
            return "Nov";
            break;
        default:    
            return "Dec";
            break; 
    }    
}


int main(int argc, char * argv[]){
    //printf("%s","Hello");
    time_t cur_time;
    char * time_string;
    cur_time = time(NULL);
    struct tm *india_loc = localtime(&cur_time);

    if(argc==1){
        printf("%s %s %d  %02d:%02d:%02d IST %d",Day_in_string(india_loc->tm_wday), Month_in_string(india_loc->tm_mon),india_loc->tm_mday, india_loc->tm_hour,india_loc->tm_min, india_loc->tm_sec,1900+india_loc->tm_year);
    }
    else if(argc==2 && compare2(argv[1],"-u")==0){
        struct tm *global_utc = gmtime(&cur_time);
        printf("%s %s %d  %02d:%02d:%02d UTC %d",Day_in_string(global_utc->tm_wday), Month_in_string(global_utc->tm_mon),global_utc->tm_mday, global_utc->tm_hour,global_utc->tm_min, global_utc->tm_sec,1900+global_utc->tm_year);
    }
}