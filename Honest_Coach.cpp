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

void read_array(ll * &arr,ll n){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    return;
}

void print_array(ll * &arr,ll n){
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

ll search_And_print_array(ll * &arr,ll n){
    ll min=1001;
    for(ll i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<min){
            min=arr[i+1]-arr[i];
        }
    }
    return min;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        ll * arr=new ll[n];
        read_array(arr,n);
        //print_array(arr,n);
        sort(arr,arr+n);
        cout<<search_And_print_array(arr,n)<<endl;
    }
    return 0;
}