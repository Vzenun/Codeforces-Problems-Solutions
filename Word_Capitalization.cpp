#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    string a;
    cin>>a;
    string b="";
    for(int i=0;i<a.size();i++){
        if(i==0 && a[i]>=97){
            b+=(char)(a[i]-32);
        }
        else{
            b+=a[i];
        }
    }
    cout<<b;
}