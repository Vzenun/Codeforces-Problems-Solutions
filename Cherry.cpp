// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

void arr_input(ll n,ll * &arr){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    return;
}

void arr_print(ll n,ll * &arr){
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll t=0;t<test;t++){
        ll n;
        cin>>n;
        ll * arr=new ll[n];
        ll * arr2=new ll[n];
        arr_input(n,arr);
        std::copy(arr, arr+n, arr2); //nice copy function
        ll max=0;
        for(ll j=0;j<n-1;j++){
            if(max<arr[j]*arr[j+1]){
                max=arr[j]*arr[j+1];
            }
        }
        cout<<max<<endl;
        //arr_print(n,arr2);
    }
    return 0;
}