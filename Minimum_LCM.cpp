#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        ll fla=0;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                cout<<n/i<<" "<<n-n/i<<endl;
                fla=1;
                break;
            }
        }
        if(fla==0){
            cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}