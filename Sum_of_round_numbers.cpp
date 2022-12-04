// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<cstring>
#include<cstdio>
//#include <bits/stdc++.h>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        string s=to_string(n);
        vec a;
        ll count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                count++;
                a.push_back((s[i]-'0')*pow(10,s.size()-i-1));
            }
        }
        cout<<count<<endl;
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    //cout<<6%0<<endl;
    return 0;
}