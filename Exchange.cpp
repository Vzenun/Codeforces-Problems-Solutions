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
        ll n,a,b;
        cin>>n>>a>>b;
        if(b<a){
            cout<<1<<endl;
        }
        else{
            cout<<(ll)ceil(((double)n)/((double)a))<<endl;
        }
    }
    return 0;
}