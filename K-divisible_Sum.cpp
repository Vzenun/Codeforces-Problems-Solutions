//Vidur goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<cstddef>
#include<cstdio>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>
# define ul unsigned long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n,k;
        cin>>n>>k;
        if(n>k){
            ll a=n/k;
            ll r=n%k;
            if(r==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else if(n<k){
            ll m=k/n;
            ll r=k%n;
            if(r==0){
                cout<<m<<endl;
            }
            else{
                cout<<m+1<<endl;
            }
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}