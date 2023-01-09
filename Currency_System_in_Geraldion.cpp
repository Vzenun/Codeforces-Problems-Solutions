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
ll seiv[1000001]={0};

void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}
ll gcd(ll a,ll b){if(b==0){return a;}if(a>b){return gcd(b,a%b);}else{return gcd(b,a);}}
void seive(){
    seiv[0]=0;
    seiv[1]=1;
    for(ll i=2;i*i<1000001;i++){
        if(seiv[i]==0){
            seiv[i]=i;
            for(ll j=i*i;j<1000001;j=j+i){
                if(seiv[j]==0){
                    seiv[j]=i;
                }
            }
        }
    }
}
void print_array(ll arr[],ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}
// abs() is used for the absolute value of a number

int main(){
    make_it_fast();
    seive();
    ll n;
    cin>>n;
    ll * arr=new ll[n];
    read_array(arr,n);
    ll flag=0;
    ll prev=arr[0];
    if(arr[0]==1){
        flag=1;
    }
    for(ll i=1;i<n;i++){
        if(arr[i]==1){
            flag=1;
        }
        prev=gcd(prev,arr[i]);
    }
    //cout<<prev<<endl;
    if(prev==1 && flag==1){
        cout<<-1<<endl;
    }
    else if(prev==1 && flag==0){
        cout<<1<<endl;
    }
    else{
        cout<<prev-1<<endl;
    }
    return 0;
}