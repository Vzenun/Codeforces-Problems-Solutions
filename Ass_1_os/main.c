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
#include <stddef.h>
void *myThreadFun(void * argv){
    system(argv);
    return NULL;
}


int compare(char a[],char b[])  
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

void ls_command(char * argv[]){
    pid_t pid;
    pid=fork(); //here as instructed we have created a new process
    if(pid==0){
        //printf("Yo bro kaiubebhevchdvch\n");
        execv("/Users/vidurgoel/Codeforces/Ass_1_os/ls",argv);
        //printf("Hi");
    }
    else{
        wait(NULL);
        //printf("Yo");
    }
}
void date_command(char * ar[],int num){
    pid_t pid;
    pid=fork(); //here as instructed we have created a new process
    if(num==1){
        char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/date",NULL};
        if(pid==0){
            //printf("Yo bro kaiubebhevchdvch\n");
            execv("/Users/vidurgoel/Codeforces/Ass_1_os/date",argv);
            //printf("Hi");
        }
        else{
            wait(NULL);
        }
    }
    else if(num==2 && compare("-u",ar[1])==0){
        //printf("%s","Bhosdika\n");
        char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/date","-u",NULL};
        if(pid==0){
            //printf("Yo bro kaiubebhevchdvch\n");
            execv("/Users/vidurgoel/Codeforces/Ass_1_os/date",argv);
            //printf("Hi");
        }
        else{
            wait(NULL);
        }
    }
}
void mkdir_command(char ** ar,int ak){
    for(int i=2;i<ak;i++){
        //printf("%d",ak);
        pid_t pid;
        pid=fork(); //here as instructed we have created a new process

        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",str,"-v",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        else{
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",ar[i],"-v",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        
    }
}
void rm_command(char ** ar,int ak){
    for(int i=2;i<ak;i++){
        //printf("%d",ak);
        pid_t pid;
        pid=fork(); //here as instructed we have created a new process

        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/rm",str,"-i",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/rm",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        else{
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/rm",ar[i],"-i",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/rm",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        
    }
}

void rm_command2(char ** ar,int ak){
    for(int i=2;i<ak;i++){
        //printf("%d",ak);
        pid_t pid;
        pid=fork(); //here as instructed we have created a new process

        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/rm",str,"-f",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/rm",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        else{
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/rm",ar[i],"-f",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/rm",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        
    }
}

void mkdir_command2(char ** ar,int ak){
    for(int i=2;i<ak;i++){
        //printf("%d",ak);
        pid_t pid;
        pid=fork(); //here as instructed we have created a new process

        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",str,"-p",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",argv);
                printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        else{
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",ar[i],"-p",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/mkdir",argv);
                printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        
    }
}


void cd_command(char *words[]){
    // printf("%s",words[1]);
    // printf("%s",words[1]);
    // printf("%s",words[1]);
    int a=strlen(words[1]);
    // printf("1");
    char str2[100];
    // printf("10");
    strcpy(str2,words[1]);
    // printf("100");
    char str[100]="";
    // printf("11");
    strncat(str,str2,a-1);
    // printf("%s",str);
    int c = chdir(str);
        if (c == -1)
        {
            printf("%s","No such file or directory\n");
        }
}
void pwd_command(){ //this function will print the current working directory.
    char buf_array[1024]; 
    //here what we have done is we have defined a character buffer array that could hold the paths upto 1024 characters:
    printf(">>%s",getcwd(buf_array,sizeof(buf_array)));
    //printf("Hello");
    //printf("\n");
}


#define MAX_INPUT 1024;
#define MAX_WORD 128;
int split_string(char* buf, char ** word_arr){
    // printf("Hi");
    int pos=0;
    char * str=strtok(buf," ");
    while(str!=NULL){
        word_arr[pos]=str;
        //printf("%s",str);
        str=strtok(NULL," ");
        pos++;
    }
    return pos;
}

void reading_line(char* str)
{
    char line[1024];
    //printf("%s","\n");
    pwd_command();
    printf("%s",">>");
    fgets(line,1024,stdin);
    if (strlen(line) != 0) {
        //add_history(buf);
        strcpy(str, line);
    }
}

/*
Assignment we have to make 3 internal commands work
1.cd (use it to change the directories):
    cd command in linux known as change directory command. It is used to change current working directory.
    we are going to do three vqariations of this:
        -> (cd ~)/(cd) this command is used to change directory to the home directory. 
        -> cd .. : this command is used to move to the parent directory of current directory,
            or the directory one level up from the current directory. “..” represents parent directory.
        -> cd dir_1/dir_2/dir_3: This command is used to move inside a directory from a directory
2.echo (print messages input after the echo in " ")
    echo command in linux is used to display line of text/string that are passed as an argument .
    This is a built in command that is mostly used in shell scripts and batch files to output status text to the screen or a file.
    we are going to do two variations
        -> echo "Geeks for Geeks"
        -> echo -e "Geeks \nfor \nGeeks"
3.pwd (present working directory)

*/

void date_command_t(char * ar[],int num){
    if(num==2){
        char * argv="/Users/vidurgoel/Codeforces/Ass_1_os/date";
        pthread_t thread_id;
        pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
        pthread_join(thread_id, NULL);
    }
    else if(num==3 && compare(ar[2],"-u")==0){
        //printf("%s","Bhosdika\n");
        char * argv="/Users/vidurgoel/Codeforces/Ass_1_os/date -u";
        pthread_t thread_id;
        pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
        pthread_join(thread_id, NULL);
    }
}

void ls_command_t(char * argv){
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
    pthread_join(thread_id, NULL);
}

void cat_command_t(char ** ar,int ak){
    for(int i=3;i<ak;i++){
        //printf("Ho");
        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/cat";
            strcat(argv," ");
            strcat(argv,str);
            strcat(argv," ");
            strcat(argv,"-n");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        else{
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/cat";
            strcat(argv," ");
            strcat(argv,ar[i]);
            strcat(argv," ");
            strcat(argv,"-n");
            //printf("%s",argv);
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        
    }
}

void cat_command_t2(char ** ar,int ak){
    for(int i=2;i<ak;i++){
        //printf("%s",ar[i]);
        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/cat";
            strcat(argv," ");
            strcat(argv,str);
            strcat(argv," ");
            strcat(argv,"-e");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        else{
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/cat";
            strcat(argv," ");
            strcat(argv,ar[i]);
            strcat(argv," ");
            strcat(argv,"-e");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        
    }
}

void mkdir_command_t(char ** ar,int ak){
    for(int i=3;i<ak;i++){
        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/mkdir";
            strcat(argv," ");
            strcat(argv,str);
            strcat(argv," ");
            strcat(argv,"-v");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        else{
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/mkdir";
            strcat(argv," ");
            strcat(argv,ar[i]);
            strcat(argv," ");
            strcat(argv,"-v");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        
    }
}
void rm_command_t(char ** ar,int ak){
    for(int i=3;i<ak;i++){
        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/rm";
            strcat(argv," ");
            strcat(argv,str);
            strcat(argv," ");
            strcat(argv,"-i");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        else{
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/rm";
            strcat(argv," ");
            strcat(argv,ar[i]);
            strcat(argv," ");
            strcat(argv,"-i");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
    }
}

void rm_command_t2(char ** ar,int ak){
    for(int i=3;i<ak;i++){
        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/rm";
            strcat(argv," ");
            strcat(argv,str);
            strcat(argv," ");
            strcat(argv,"-f");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        else{
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/rm";
            strcat(argv," ");
            strcat(argv,ar[i]);
            strcat(argv," ");
            strcat(argv,"-f");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
    }
}

void mkdir_command_t2(char ** ar,int ak){
    for(int i=3;i<ak;i++){
        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/mkdir";
            strcat(argv," ");
            strcat(argv,str);
            strcat(argv," ");
            strcat(argv,"-p");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        else{
            char argv[500] ="/Users/vidurgoel/Codeforces/Ass_1_os/mkdir";
            strcat(argv," ");
            strcat(argv,ar[i]);
            strcat(argv," ");
            strcat(argv,"-p");
            pthread_t thread_id;
            pthread_create(&thread_id, NULL, myThreadFun,(void *) argv);
            pthread_join(thread_id, NULL);
        }
        
    }
}

/*


1. Cat command:
    ->Cat(concatenate) command is very frequently used in Linux. It reads data from the file and gives their 
        content as output. It helps us to create, view, concatenate files. So let us see some frequently used cat commands.
    
*/
void exit_command(){
    printf("%s","Goodbye\n");
    exit(0);
}

void echo_command(char ** s,int a){ //this function print the message
    for (int i = 1; i < a; i++){
        if(i!=a-1){
            printf("%s ", s[i]);
        }
        else{
            int b=strlen(s[a-1]);
            // printf("1");
            char str2[100];
            // printf("10");
            strcpy(str2,s[a-1]);
            // printf("100");
            char str[100]="";
            // printf("11");
            strncat(str,str2,b-1);
            printf("%s ", str);
        }
    }
}

void cat_command(char ** ar,int ak){
    for(int i=2;i<ak;i++){
        //printf("%d",ak);
        pid_t pid;
        pid=fork(); //here as instructed we have created a new process

        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/cat",str,"-n",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/cat",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        else{
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/cat",ar[i],"-n",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/cat",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        
    }
}

void cat_command2(char ** ar,int ak){
    for(int i=1;i<ak;i++){
        //printf("%d",ak);
        pid_t pid;
        pid=fork(); //here as instructed we have created a new process

        if(i==ak-1){
            int a=strlen(ar[i]);
            char str2[100];
            strcpy(str2,ar[i]);
            char str[100]="";
            strncat(str,str2,a-1);
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/cat",str,"-e",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/cat",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        else{
            char * argv[]={"/Users/vidurgoel/Codeforces/Ass_1_os/cat",ar[i],"-e",NULL};
            if(pid==0){
                //printf("Yo bro kaiubebhevchdvch\n");
                execv("/Users/vidurgoel/Codeforces/Ass_1_os/cat",argv);
                //printf("%s","Hi");
            }
            else{
                wait(NULL);
                //printf("Yo");
            }
        }
        printf("%s","\n");
    }
}

void loop_start(){
    int status; // THIS WOULD INDICATE WHEN TO STOP THE SHELL I.E, TERMINAT3E THE SHELL
    
    do {
        char input_line[1024];// this is the array in which we are goiung to take the input that user is going to give
        char * split_args[100];
        //printf(">> ");
        reading_line(input_line);
        //printf("%s",input_line);
        int num_args=split_string(input_line,split_args);
        //printf("%d",num_args);
        //printf("%d",strcmp(split_args[0],"pwd"));
        //printf(" %s",split_args[0]);
        if((num_args==1 && compare(split_args[0],"pwd")==0)||(num_args==2 && compare(split_args[0],"pwd")==0 && compare(split_args[1],"-L")==0)){
            //printf("Hi");
            pwd_command();
            printf("%s","\n");
        }
        else if(num_args==2 && compare(split_args[0],"pwd")==0 && compare(split_args[1],"--help")==0){
            //printf("Hi");
            printf("%s","pwd: pwd [-L]\n");
            printf("%s","   Print the name of the current working directory.\n");
            printf("%s","   Options:\n");
            printf("%s","      -L      print the value of SPWD if it names the current working directory.\n");
        }
        else if(num_args==1 && compare(split_args[0],"ls")==0){
            char * argv[] = {"/Users/vidurgoel/Codeforces/Ass_1_os/ls", NULL};
            ls_command(argv);
            printf("%s","\n");
        }
        else if(num_args==2 && compare(split_args[0],"ls")==0 && compare(split_args[1],"-1")==0){
            char * argv[] = {"/Users/vidurgoel/Codeforces/Ass_1_os/ls", "-1",NULL};
            ls_command(argv);
            //printf("%s","\n");
        }
        else if(num_args==2 && compare(split_args[0],"ls")==0 && compare(split_args[1],"-m")==0){
            char * argv[] = {"/Users/vidurgoel/Codeforces/Ass_1_os/ls", "-m",NULL};
            ls_command(argv);
            printf("%s","\n");
        }
        else if(num_args==1 && compare(split_args[0],"exit")==0){
            exit_command();
        }
        else if(num_args==1 && compare(split_args[0],"cd")==0){
            chdir("/Users/vidurgoel");
        }
        else if(num_args==2 && compare(split_args[0],"cd")==0 && compare(split_args[1],"~")==0){
            chdir("/Users/vidurgoel");
            //printf("%s","\n");
        }
        else if(num_args==2 && compare(split_args[0],"cd")==0){
            cd_command(split_args);
        }
        else if(num_args>=3 && compare(split_args[0],"mkdir")==0 && compare(split_args[1],"-v")==0){
            mkdir_command(split_args,num_args);
        }
        else if(num_args>=3 && compare(split_args[0],"mkdir")==0 && compare(split_args[1],"-p")==0){
            mkdir_command2(split_args,num_args);
        }
        else if(num_args>=3 && compare(split_args[0],"rm")==0 && compare(split_args[1],"-i")==0){
            rm_command(split_args,num_args);
        }
        else if(num_args>=3 && compare(split_args[0],"rm")==0 && compare(split_args[1],"-f")==0){
            //printf("%s","Hi");
            rm_command2(split_args,num_args);
        }
        else if(num_args==2 && compare(split_args[0],"echo")==0 && compare(split_args[1],"*")==0){
            char * argv[] = {"/Users/vidurgoel/Codeforces/Ass_1_os/ls", NULL};
            ls_command(argv);
            printf("%s","\n");
        }
        else if(num_args>=2 && compare(split_args[0],"echo")==0){
            //printf("Hi");
            echo_command(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args==1 && compare(split_args[0],"date")==0){
            //printf("Hi");
            date_command(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args==2 && compare(split_args[0],"date")==0 && compare(split_args[1],"-u")==0){
            //printf("Hi");
            date_command(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args==1 && compare(split_args[0],"\n")==0){
            //printf("%s","\n");
        }
        //-----------------------------------------------------------------------------------------------------------------------------------
        else if(num_args==2 && compare(split_args[0],"date")==0 && compare(split_args[1],"&t")==0){
            //printf("Hi");
            date_command_t(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args==3 && compare(split_args[0],"date")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-u")==0){
            //printf("%s","Hi");
            date_command_t(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args==2 && compare(split_args[0],"ls")==0 && compare(split_args[1],"&t")==0){
            char * argv = "/Users/vidurgoel/Codeforces/Ass_1_os/ls";
            ls_command_t(argv);
            printf("%s","\n");
        }
        else if(num_args==3 && compare(split_args[0],"ls")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-1")==0){
            char * argv = "/Users/vidurgoel/Codeforces/Ass_1_os/ls -1";
            ls_command_t(argv);
            //printf("%s","\n");
        }
        else if(num_args==3 && compare(split_args[0],"ls")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-m")==0){
            char * argv = "/Users/vidurgoel/Codeforces/Ass_1_os/ls -m";
            ls_command_t(argv);
            printf("%s","\n");
        }

        else if(num_args>=4 && compare(split_args[0],"cat")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-n")==0){
            //printf("1");
            cat_command_t(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args>=3 && compare(split_args[0],"cat" )==0 && compare(split_args[1],"&t")==0){
            //printf("2");
            cat_command_t2(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args>=3 && compare(split_args[0],"cat")==0 && compare(split_args[1],"-n")==0){
            cat_command(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args>=2 && compare(split_args[0],"cat")==0){
            //printf("%s","Hi");
            cat_command2(split_args,num_args);
            printf("%s","\n");
        }
        else if(num_args>=4 && compare(split_args[0],"mkdir")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-v")==0){
            mkdir_command_t(split_args,num_args);
        }
        else if(num_args>=4 && compare(split_args[0],"mkdir")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-p")==0){
            mkdir_command_t2(split_args,num_args);
        }
        else if(num_args>=4 && compare(split_args[0],"rm")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-i")==0){
            rm_command_t(split_args,num_args);
        }
        else if(num_args>=4 && compare(split_args[0],"rm")==0 && compare(split_args[1],"&t")==0 && compare(split_args[2],"-f")==0){
            //printf("%s","Hi");
            rm_command_t2(split_args,num_args);
        }
        else{
            printf("%s","Please enter the right command: \n");
            printf("%s","Commands available for user input are: \n");
            printf("%s","1. pwd\n");
            printf("%s","2. cd\n");
            printf("%s","3. echo\n");
            printf("%s","4. ls\n");
            printf("%s","5. cat\n");
            printf("%s","6. mkdir\n");
            printf("%s","7. date\n");
            printf("%s","8. rm\n");
            printf("%s","9. exit\n");
            printf("%s","Please do see the write up mannual before using this shell. \n");
        }
        //status = execut_stat(split_args);
        status=1;
    } while (status);
    return;
}

void shell_start(){
    printf("%s","**Welcome to the shell made by Vidur**");
    // char* username = getenv("USER");
    // printf("\n\n\nUSER is: %s", username);
    printf("%s","\n");
    // sleep(1);
    loop_start();
}

int main(){
    shell_start();
    return 0;
}

