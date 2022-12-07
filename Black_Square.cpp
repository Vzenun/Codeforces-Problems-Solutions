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

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a[4];
    for(ll i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    ll sum=0;
    for(ll i=0;i<s.size();i++){
        sum+=a[s[i]-'0'-1];
    }
    cout<<sum<<endl;
    return 0;
}