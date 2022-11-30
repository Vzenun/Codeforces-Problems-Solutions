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
    ll n,a,b;
    cin>>n>>a>>b;
    ll x=std::max(a+1,n-b);
    ll count=0;
    while(x>=a+1 && x>=n-b && x<=n){
        count+=1;
        x++;
    }
    cout<<count<<endl;
    return 0;
}