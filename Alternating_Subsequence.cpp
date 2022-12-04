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
        vec a;
        ll k;
        for(ll j=0;j<n;j++){
            cin>>k;
            a.push_back(k);
        }
        ll fpt=0;
        ll bpt=n-1;
        ll flag=0;
        while(fpt<=bpt){
            if(flag==0){
                cout<<a[fpt]<<" ";
                fpt++;
                flag=1;
            }
            else{
                cout<<a[bpt]<<" ";
                bpt--;
                flag=0;
            }
        }
        cout<<endl;
    }
    return 0;
}