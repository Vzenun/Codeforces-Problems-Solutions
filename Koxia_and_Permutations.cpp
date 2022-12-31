//Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<stack>
#include <chrono>
#include <random>
#include <cassert>

# define ll long long int
# define vec vector<long long int>

using namespace std;

void read_array(ll * &arr,ll n){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    return;
}

ll print_array(ll * &arr,ll n){
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n,m;
        cin>>n>>m;
        ll j=0;
        ll k=n-1;
        ll arr[n];
        for(ll i1=0;i1<n;i1++){
            arr[i1]=i1+1;
        }
        ll flag=0;
        while(j<=k){
            if(flag==0){
                cout<<arr[k]<<" ";
                k=k-1;
                flag=1;
            }
            else{
                cout<<arr[j]<<" ";
                j=j+1;
                flag=0;
            }
        }
        cout<<endl;
    }
    return 0;
}