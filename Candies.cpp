// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test; //number of test caases
    cin>>test;
    for(ll i=1;i<=test;i++){
        ll n;
        cin>>n;
        if(ceil(log2(n+1))==floor(log2(n+1))){
            cout<<1<<endl;
        }
        else{
            for(ll j=2;j*j<=n;j++){
                if(n%j==0){
                    if(ceil(log2(j+1))==floor(log2(j+1))){
                        cout<<n/j<<endl;
                        break;
                    }
                    else if(ceil(log2((n/j)+1))==floor(log2((n/j)+1))){
                        cout<<j<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}