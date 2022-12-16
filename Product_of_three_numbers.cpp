//Vidur goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<cstddef>
#include<cstdio>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>
# define ul unsigned long long int

using namespace std;

void read_array(ll * &arr,ll n){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    return;
}

ll search_array(ll * &arr,ll n){
    ll num=0;
    for(ll i=0;i<n;i++){
        if(arr[i]>arr[0]){
            num++;
        }
    }
    return num;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll * arr=new ll[4];
        read_array(arr,4);
        cout<<search_array(arr,4)<<endl;
    }
    return 0;
}