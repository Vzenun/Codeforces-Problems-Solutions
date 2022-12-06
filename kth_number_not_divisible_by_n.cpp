#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n,k;
        cin>>n>>k;
        ll m=k%(n-1);
        if(m==0){
            cout<<(k/(n-1))*n+m-1<<endl;
        }
        else{
            cout<<(k/(n-1))*n+m<<endl;
        }
    }
    return 0;
}