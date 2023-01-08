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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll flag1=0;
        ll flag2=0;
        ll a0=0;
        if(s[0]=='L'){
            a0=1;
        }
        vector<ll> a;
        vector<ll> b;
        for(ll i=0;i<n;i++){
            if(s[i]=='L'){
                flag1=1;
                a.push_back(i);
            }
            else{
                flag2=1;
                b.push_back(i+2);
            }
        }
        if(flag1==1 && flag2==0){
            cout<<-1<<endl;
            continue;
        }
        else if(flag2==1 && flag1==0){
            cout<<-1<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[a.size()-1]==b[0]){
            cout<<0<<endl;
            continue;
        }
        else if(a[a.size()-1]+1>=b[0]){
            cout<<0<<endl;
            continue;
        }
        else{
            if(a0==1){
                for(ll i=0;i<n-1;i++){
                    if(s[i]=='L' && s[i+1]=='R'){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}