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
        ll * arr=new ll[n];
        for(ll j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr+1,arr+n);
        ll a=arr[0];
        for(ll j=0;j<n;j++){
            if(arr[j]>a){
                ll m=arr[j]-a;
                if(m%2==0){
                    a=a+m/2;
                }
                else{
                    a=a+m/2+1;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}