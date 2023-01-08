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


typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;
# define vec vector<ll>

using namespace std;
using namespace chrono;

void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}
// abs() is used for the absolute value of a number

int main(){
    make_it_fast();
    ll n;
    cin>>n;
    if(n%2==0){
        ll k=n/2;
        cout<<k<<endl;
        for(ll i=0;i<k;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else{
        ll k=n/2;
        k-=1;
        cout<<k+1<<endl;
        for(ll i=0;i<k;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}