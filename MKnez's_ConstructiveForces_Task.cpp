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
#include<chrono>
#include<random>
#include<cassert>

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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    for(ll j=0;j<test;j++){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++){
                if(i%2==0){
                    cout<<"1 ";
                }
                else{
                    cout<<"-1 ";
                }
            }
            cout<<endl;
        }
        else{
            if(n==3){
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            ll a=n-3;
            ll b=1-n;
            for(ll i=0;i<n;i++){
                if(i%2==0){
                    cout<<n-3<<" ";
                }
                else{
                    cout<<1-n<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}