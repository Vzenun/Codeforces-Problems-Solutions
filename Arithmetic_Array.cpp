#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll k;
        cin>>k;
        ll arr[k];
        for(ll i=0;i<k;i++){
            cin>>arr[i];
        }
        ll sum=0;
        for(ll i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum==k){
            cout<<0<<endl;
        }
        else if(sum<k){
            cout<<1<<endl;
        }
        else{
            cout<<sum-k<<endl;
        }
    }
    return 0;
}