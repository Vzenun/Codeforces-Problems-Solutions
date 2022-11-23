#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int num=0;
    while(a<=b){
        a=3*a;
        b=2*b;
        num++;
    }
    cout<<num;
}
