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
    ll k;
    cin>>k;
    ll * arr=new ll[12];
    read_array(arr,12);
    sort(arr,arr+12);
    ll sum=0;
    ll num=0;
    if(sum>=k){
        cout<<num<<endl;
        return 0;
    }
    for(ll i=0;i<12;i++){
        sum+=arr[11-i];
        num++;
        if(sum>=k){
            break;
        }
    }
    if(num==12 && sum<k){
        cout<<-1<<endl;
        return 0;
    }
    cout<<num<<endl;
    return 0;
}