// Vidur Goel
// Date - 3:12:2022

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstdio>
#include<cstring>
//#include <bits/stdc++.h>


# define ll long long int
//# define vec long long int[]

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    ll arr2[n+1];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        //cout<<arr[i];
    }
    sort(arr,arr+n);
    ll q;
    cin>>q;
    for(ll a=0;a<q;a++){
        ll time;
        cin>>time;
        if(time>=arr[n-1]){
            //cout<<arr[n-1]<<endl;
            cout<<n-1+1<<endl;
        }
        else{
            ll k=std::upper_bound(arr,arr+n,time)-arr;
            cout<<k<<endl;
        }
    }
    return 0;
}