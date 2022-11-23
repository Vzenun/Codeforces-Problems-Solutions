#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    string b="";
    int k=0;
    int num=0;
    for(int i=0;i<s.length();i++){
        if(i<s.length()-2 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2; 
            k=0;
        }
        else{
            if(k==1){
                b=b+s[i];
                num++;
                k=1;
            }
            if(k==0 && num==0){
                b=b+s[i];
                num++;
                k=1;
            }
            if(k==0 && num>0){
                b=b+' ';
                b=b+s[i];
                num++;
                k=1;
            }
        }
    }
    cout<<b;
}
