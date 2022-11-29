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
        ll h,m;
        cin>>h>>m;
        cout<<1440-h*60-m<<endl;
    }
    return 0;
}