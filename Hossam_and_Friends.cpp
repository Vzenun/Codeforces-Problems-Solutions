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
        ll n,m;
        cin>>n>>m;
        ll a[m];
        ll b[m];
        for(ll i=0;i<m;i++){
            cin>>a[i]>>b[i];
        }
        ll arr[n];
        for(ll i=0;i<m;i++){
            arr[i]=n-1;
        }
        for(ll i=0;i<m;i++){
            cin>>a[i]>>b[i];
        }
    }
    return 0;
}