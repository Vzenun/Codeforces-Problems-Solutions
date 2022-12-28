

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
    ll sum=1;
    for(ll i=0;i<n;i++){
        sum*=arr[i];
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
        ll * arr=new ll[n];
        read_array(arr,n);
        ll k=print_array(arr,n);
        ll sum=k+n-1;
        sum=sum*2022;
        cout<<sum<<endl;
    }
    return 0;
}