#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,x;
    cin>>n>>x;
    ll count=0;
    for(ll i=1;i*i<=x && i<=n;i++){
        if(x%i==0 && i*i!=x && x/i<=n){
            count+=2;
        }
        else if(x%i==0 && i*i==x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}