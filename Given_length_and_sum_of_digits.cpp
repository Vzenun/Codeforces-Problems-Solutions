// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<cstring>
#include<cstdio>
//#include <bits/stdc++.h>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,s;
    cin>>n>>s;
    ll arr[n];
    ll k=s;
    if(n*9<s){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        for(ll i=0;i<n;i++){
            if(k>0){
                arr[i]=1;
            }
            else{
                
            }
        }
        s=s-n;
        ll i=0;
        while(i<n){
            if(s>=8){
                arr[i]=9;
                s=s-8;
                i++;
            }
            else{
                arr[i]=arr[i]+s;
                s=0;
                i++;
            }
        }
        
        for(ll i=0;i<n;i++){
            cout<<arr[n-i-1];
        }
        cout<<" ";
        for(ll i=0;i<n;i++){
            cout<<arr[i];
        }
    }

    return 0;
}