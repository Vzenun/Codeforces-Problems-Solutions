

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
# define vec vector<long long int>

using namespace std;

void read_array(ll * &arr,ll n){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    return;
}

ll print_array(ll * &arr,ll n){
    ll sum=1;
    for(ll i=0;i<n;i++){
        sum*=arr[i];
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        string s;
        cin>>s;
        ll flag=0;
        ll flag1=0;
        ll flag2=0;
        if(s[0]=='Y' || s[0]=='y'){
            flag=1;
        }
        if(s[1]=='E' || s[1]=='e'){
            flag1=1;
        }
        if(s[2]=='S' || s[2]=='s'){
            flag2=1;
        }
        if(flag==1 && flag1==1 && flag2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}