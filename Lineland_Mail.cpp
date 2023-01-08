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
    ll * arr=new ll[n];
    read_array(arr,n);
    ll first=arr[0];
    ll second=arr[n-1];
    for(ll i=0;i<n;i++){
        if(i==0){
            ll min=abs(arr[i]-arr[i+1]);
            ll max=abs(arr[0]-arr[n-1]);
            cout<<min<<" "<<max<<endl;
        }
        else if(i==n-1){
            ll min=abs(arr[i]-arr[i-1]);
            ll max=abs(arr[0]-arr[n-1]);
            cout<<min<<" "<<max<<endl;
        }
        else{
            ll min,max;
            if(abs(arr[i]-arr[i-1])>abs(arr[i]-arr[i+1])){
                min=abs(arr[i]-arr[i+1]);
            }
            else{
                min=abs(arr[i]-arr[i-1]);
            }
            if(abs(arr[i]-arr[0])>abs(arr[i]-arr[n-1])){
                max=abs(arr[i]-arr[0]);
            }
            else{
                max=abs(arr[i]-arr[n-1]);
            }
            cout<<min<<" "<<max<<endl;
        }
    }
    return 0;
}