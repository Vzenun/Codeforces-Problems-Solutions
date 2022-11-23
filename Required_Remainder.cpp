#include<iostream>
#include<string>
#include<cmath>
#include<climits>
//#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int x,y,n;
        cin>>x>>y>>n;
        long long int m1=y%x;
        long long int a=n/x;
        long long int m2=n%x;
        if(m2==0){
            a=(a-1)*x+m1;
            if(a>n){
                a=a-x;
            }
        }
        else{
            a=(a)*x+m1;
            if(a>n){
                a=a-x;
            }
        }
        cout<<a<<endl;
    }
    
    return 0;
}