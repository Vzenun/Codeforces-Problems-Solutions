#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int a;
    cin>>a;
    int num=0;
    if(a<6){
        cout<<1;
    }
    else if(a%5==0){
        cout<<a/5;
    }
    else{
        a=a/5;
        cout<<a+1;
    }
    return 0;
}
