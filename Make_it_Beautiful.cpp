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
using namespace chrono;

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

ll check(ll * arr,ll n){
    for(ll i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll j=0;j<test;j++){
        ll n;
        cin>>n;
        ll * arr=new ll[n];
        read_array(arr,n);
        ll hum=check(arr,n);
        if(hum==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(n%2==0){
            ll k=n/2;
            ll flag=0;
            for(ll i=0;i<k;i++){
                if(flag==0){
                    cout<<arr[i]<<" ";
                    i--;
                    flag=1;
                }
                else{
                    cout<<arr[n-1-i]<<" ";
                    flag=0;
                }
            }
            cout<<endl;
        }
        else{
            ll k=n/2;
            ll flag=0;
            for(ll i=0;i<k;i++){
                if(flag==0){
                    cout<<arr[i]<<" ";
                    i--;
                    flag=1;
                }
                else{
                    cout<<arr[n-1-i]<<" ";
                    flag=0;
                }
            }
            cout<<arr[k]<<endl;
        }
    }
    return 0;
}