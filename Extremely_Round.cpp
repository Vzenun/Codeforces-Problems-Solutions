// Vidur Goel

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
ll seiv[1000001]={0};

void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}
ll gcd(ll a,ll b){if(b==0){return a;}if(a>b){return gcd(b,a%b);}else{return gcd(b,a);}}
void seive(){seiv[0]=0;seiv[1]=1;for(ll i=2;i*i<1000001;i++){if(seiv[i]==0){seiv[i]=i;for(ll j=i*i;j<1000001;j=j+i){if(seiv[j]==0){seiv[j]=i;}}}}}
void print_array(ll arr[],ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}
// abs() is used for the absolute value of a number

int main(){
    make_it_fast();
    //seive();
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        if(n<10){
            cout<<n<<endl;
        }
        else if(n>=10 && n<100){
            cout<<(9+n/10)<<endl;
        }
        else if(n>=100 && n<1000){
            cout<<((n/100)+9+9)<<endl;
        }
        else if(n>=1000 && n<10000){
            cout<<((n/1000)+9+9+9)<<endl;
        }
        else if(n>=10000 && n<100000){
            cout<<((n/10000)+9+9+9+9)<<endl;
        }
        else if(n>=100000 && n<1000000){
            cout<<((n/100000)+9+9+9+9+9)<<endl;
        }
    }
    return 0;
}