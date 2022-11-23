#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int m,s;
        cin>>m>>s;
        long long int arr[m];
        long long int sum=0;
        for(long long int j=0;j<m;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        long long int k=sum+s;
        k=2*k;
        k=floor(sqrt((double)k));
        if(k*(k+1)==2*(sum+s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}