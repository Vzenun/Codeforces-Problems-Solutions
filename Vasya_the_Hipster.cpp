#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<a<<" "<<0;
    }
    else if(a>b){
        cout<<b<<" "<<(a-b)/2;
    }
    else{
        cout<<a<<" "<<(b-a)/2;
    }
    
    return 0;
}