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

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define iter(x) (x).begin(), (x).end()

# define ll long long int
# define vec vector<long long int>

using namespace std;
using namespace chrono;

void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}

int main(){
    make_it_fast();
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        ll * arr=new ll[n];
        read_array(arr,n);
        sort(arr,arr+n);
        ll flag=0;
        for(ll i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1){
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}