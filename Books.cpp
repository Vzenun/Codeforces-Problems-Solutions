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
    ll n,time;
    cin>>n;
    cin>>time;
    long long int arr[n];
    long long int arr2[n+1];
    ll k;
    ll sum=0;
    arr2[0]=sum;
    for(ll i=0;i<n;i++){
        cin>>k;
        arr[i]=k;
        sum+=k;
        arr2[i+1]=sum;
    }
    if(sum<=time){
        cout<<n<<endl;
        return 0;
    }
    ll large=0;
    for(ll i=n;i>=0;i--){
        long long int kr=std::upper_bound(arr2, arr2+i+1, arr2[i]-time)-arr2;
        if(kr!=0){
            if(arr2[kr-1]==arr2[i]-time){
                kr=kr-1;
            }
        }
        //cout<<kr<<endl;
        if(i-kr>large){
            large=i-kr;
        }
    }
    cout<<large<<endl;
    return 0;
}