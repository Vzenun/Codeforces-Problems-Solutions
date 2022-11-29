#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>
# define ul unsigned long long

using namespace std;

ll check_power_2(ll n){
    if(n==1){
        return 0;
    }
    else{
        return floor(log2(n));
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll k;
        cin>>k;
        ll sum1=check_power_2(k);
        sum1=pow(2,sum1+1)-1;
        ll sum2=k*(k+1)/2;
        cout<<sum2-2*sum1<<endl;
    }
    return 0;
}