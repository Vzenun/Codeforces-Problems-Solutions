#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            a++;
        }
        else if(s[i]=='2'){
            b++;
        }
        else if(s[i]=='3'){
            c++;
        }
    }
    s.clear();
    int i=0;
    if(a+b+c==1){
        while(i<a){
            s+='1';
            i++;
        }
        i=0;
        while(i<b){
            s+='2';
            i++;
        }
        i=0;
        while(i<c){
            s+='3';
            i++;
        }
    }
    else{
        int k=0;
        while(i<a){
            if(k==0){
                s+='1';
                i++;
                k++;
            }
            else{
                s+='+';
                s+='1';
                i++;
                k++;
            }
        }
        i=0;
        while(i<b){
            if(k==0){
                s+='2';
                i++;
                k++;
            }
            else{
                s+='+';
                s+='2';
                i++;
                k++;
            }
        }
        i=0;
        while(i<c){
            if(k==0){
                s+='3';
                i++;
                k++;
            }
            else{
                s+='+';
                s+='3';
                i++;
                k++;
            }
        }
    }
    cout<<s;
}
