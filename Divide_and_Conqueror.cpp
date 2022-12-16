//Vidur goel

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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test; //number of test caases
    cin>>test;
    for(ll i=1;i<=test;i++){
        ll n;
        cin>>n;
        ll arr[n];
        ll arr2[n];
        ll sum=0;
        for(ll j=0;j<n;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        ll count=0;
        if(sum%2==0){
            cout<<"0"<<endl;
        }
        else{
            ll flag=0;
            while(flag==0){
                for(ll j=0;j<n;j++){
                    if(arr[j]%2==0 && )
                }
            }
        }
    }
    return 0;
}