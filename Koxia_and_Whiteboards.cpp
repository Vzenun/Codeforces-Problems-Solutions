

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
        ll * arr=new ll[n];
        read_array(arr,n);
        ll * brr=new ll[m];
        read_array(brr,m);
        sort(arr,arr+n);
        //sort(brr,brr+m);
        for(ll j=0;j<m;j++){
            arr[0]=brr[j];
            sort(arr,arr+n);
        }
        ll am=print_array(arr,n);
        cout<<am<<endl;
    }
    return 0;
}