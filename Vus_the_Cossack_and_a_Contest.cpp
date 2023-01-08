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
    ll n,m,k;
    cin>>n>>m>>k;
    if(m>=n && k>=n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}