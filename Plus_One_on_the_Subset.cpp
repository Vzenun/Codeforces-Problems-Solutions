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
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        ll a[n];
        for(ll j=0;j<n;j++){
            cin>>a[j];
        }
        ll min=a[0];
        ll max=a[0];
        for(ll j=0;j<n;j++){
            if(min>a[j]){
                min=a[j];
            }
            if(max<a[j]){
                max=a[j];
            }
        }
        cout<<max-min<<endl;
    }
    return 0;
}