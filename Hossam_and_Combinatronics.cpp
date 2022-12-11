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
    ll test;
    cin>>test;
    for(ll k=0;k<test;k++){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll diff=arr[n-1]-arr[0];
        ll counta=0;
        ll countb=0;
        for(ll i=0;i<n;i++){
            if(arr[i]==arr[0]){
                counta++;
            }
            else if(arr[i]==arr[n-1]){
                countb++;
            }
        }
        if(arr[0]==arr[n-1]){
            cout<<n*(n-1)<<endl;
        }
        else{
            cout<<2*counta*countb<<endl;
        }
    }
    return 0;
}