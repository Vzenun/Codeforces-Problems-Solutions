#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    vec arr;
    vec arr2;
    vec arr3;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        arr.push_back(k);
    }
    ll num=0;
    for(ll i=0;i<n;i++){
        if(num<arr[i]){
            num=arr[i];
            arr2.push_back(num);
        }
        else{
            arr2.push_back(num);
        }
    }
    num=100000;
    for(ll i=0;i<n;i++){
        if(num>arr[i]){
            num=arr[i];
            arr3.push_back(num);
        }
        else{
            arr3.push_back(num);
        }
    }
    ll count =0;
    for(ll i=0;i<n-1;i++){
        if(arr2[i+1]>arr2[i]  ||   arr3[i+1]<arr3[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}