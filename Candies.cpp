#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

void check(unsigned long long int n){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long int test;
    cin>>test;
    for(unsigned long long int i=0;i<test;i++){
        unsigned long long int n;
        cin>>n;
        while(n%2!=0){
            n=n/2;
        }
        n=n+1;
        int k=0;
        while(n%2!=0){
            n=n/2;
        }
    }
    return 0;
}