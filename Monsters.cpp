#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<vl> vvl;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool compare(pll p1 ,pll p2){
    if(p1.first>p2.first){return true;}
    else if(p1.first==p2.first){return p1.second<p2.second;}
    else{return false;}
}

signed main(){
    fast();
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n,k;
        cin>>n>>k;
        vpll arr;
        rep(j,0,n){
            ll a;
            cin>>a;
            if(a%k==0){
                arr.emplace_back(k,j);
            }
            else{
                arr.emplace_back(a%k,j);
            }
        }
        sort(all(arr),mycompare);
        rep(j,0,n){
            cout<<arr[j].ss+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}