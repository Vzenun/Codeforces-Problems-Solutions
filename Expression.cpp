#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    int max=0;
    if((a+b)*c>max){
        max=(a+b)*c;
    }
    if(a+b*c>max){
        max=a+b*c;
    }
    if(a+b+c>max){
        max=(a+b)+c;
    }
    if((a*b)*c>max){
        max=(a*b)*c;
    }
    if((a*b)+c>max){
        max=(a*b)+c;
    }
    if(a*(b+c)>max){
        max=a*(b+c);
    }
    cout<<max;
}
