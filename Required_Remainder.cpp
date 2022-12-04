// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
//#include <bits/stdc++.h>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll x,y,n;
        cin>>x>>y>>n;
        ll o=n;
        ll m=y%x;
        ll r=n%x;
        n=n-r+m;
        if(n<0){
            n=n+x;
        }
        else if(n>o){
            n=n-x;
        }
        cout<<n<<endl;
    }
    //cout<<6%0<<endl;
    return 0;
}