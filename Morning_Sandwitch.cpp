// Vidur Goel

//Codeforcees Handle: Vidurcodviz
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

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rept(i, a, n) for (ll i = (a); i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define sor(x) sort(all(x))
#define sorr(x) sort(x.rbegin(),x.rend()) // this is in order to do sorting in descending order
#define lb lower_bound
#define ub upper_bound
#define pb emplace_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462
#define mset multiset<ll> // it contains multiple instances of the same value in ascending order
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repd(i,a,b) for(ll i=b-1;i>=a;i--)
#define nn endl
#define setbits(n) __builtin_popcount(n);

string yup="YES";
string nope="NO";
void rev(vl &arr,ll n){rep(i,0,n){cin>>arr[i];}return;}
void prv(vl arr){rep(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<nn;return;}

signed main(){
    make_it_fast();
    ll n;
    cin>>n;
    rep(i,0,n){
        ll b,c,h;
        cin>>b>>c>>h;
        b=b-1;
        cout<<2*min(b,c+h)+1<<nn;
    }
    return 0;
}