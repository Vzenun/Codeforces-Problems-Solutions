#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    for(ll j=0;j<t;j++){
        ll n,k;
        cin>>n>>k;
        if(n%2==0 && k%2!=0){
            cout<<"NO"<<endl;
        }
        else if(n%2!=0 && k%2==0){
            cout<<"NO"<<endl;
        }
        else if(k*k>n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}