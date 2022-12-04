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
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        if(n%4==0){
            cout<<"YES"<<endl;
            ll k=n/2;
            //cout<<k<<endl;
            ll sum=0;
            for(ll j=0;j<k;j++){
                sum+=2*(j+1);
                cout<<2*(j+1)<<" ";
            }
            for(ll j=0;j<k;j++){
                if(j==k-1){
                    cout<<sum<<" ";
                }
                else{
                    cout<<2*j+1<<" ";
                    sum-=2*j+1;
                }
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}