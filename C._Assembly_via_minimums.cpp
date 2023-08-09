// Vidur Goel
//Codeforcees Handle: Vidurcodviz
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

void solve();
void solvg();
void solve_mul();

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<vl> vvl;

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sor(x) sort(all(x))
#define sorr(x) sort(x.rbegin(),x.rend()) // this is in order to do sorting in descending order
#define lb lower_bound
#define ub upper_bound
#define eb emplace_back
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462
#define mset multiset<ll,greater<ll>> // it contains multiple instances of the same value in descending order
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define nn endl
#define setbits(n) __builtin_popcount(n)

vl seive(1000009,-1);
string yup="YES";
string nope="NO";
void rev(vl &arr,ll n){rep(i,0,n){cin>>arr[i];}return;}
void prv(vl arr){rep(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<nn;return;}
bool prime(ll n){rep(i,2,(ll)floor(sqrtl(n))+1){if(n%i==0){return false;}}return true;}
// if seive[i]==-1 it means it is prime else composite and seive[i] will give 
// the lowest factor>1 that divides l+i actually.
void seiv(){seive[0]=0;seive[1]=1;for(ll i=2;i*i<=1000008;i++){if(seive[i]==-1){seive[i]=i;for(ll j=i*i;j<=1000008;j=j+i){if(seive[j]==-1){seive[j]=i;}}}}}
ll gcd(ll a,ll b){a=abs(a);b=abs(b);ll k=1;while(a%2==0 && b%2==0){k=2*k;a=a/2;b=b/2;}while(a%2==0){a=a/2;}while(b%2==0){b=b/2;}while(b!=0){a=a%b;swap(a,b);}return k*a;}
ll gcd(ll a,ll b,ll &x,ll &y){a=abs(a);b=abs(b);if(b == 0){x = 1;y = 0;return a;}ll x1,y1;ll d = gcd(b, a % b, x1, y1);x = y1;y = x1 - y1 * (a / b);return d;}
ll lcm(ll a,ll b){a=abs(a);b=abs(b);return (a/gcd(a, b))*b;}
ll binpow(ll a,ll n){ll res=1;while(n!=0){if(n%2==0){a=a*a;n=n/2;}else{res=res*a;n=n-1;}}return res;}
ll binpowmod(ll a,ll n,ll m){ll res=1;while(n!=0){if(n%2==0){a=a*a%m;n=n/2;}else{res=res*a%m;n=n-1;}}return res;}
ll add_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mul_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll sub_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

struct dsu{
    vl parent;
    vl size;
    
    dsu(ll n){
        size.resize(n+1);
        parent.resize(n+1);
        rep(i,0,n+1){
            make_set(i);
        }
    }

    void make_set(ll v){
        parent[v]=v;
        size[v]=1;
    }

    ll find_set(ll v){
        if(v==parent[v]){
            return v;
        }
        else{
            return parent[v]=find_set(parent[v]);
        }
    }
    void union_set(ll a,ll b){
        a=find_set(a);
        b=find_set(b);
        if(a==b){
            return;
        }
        else{
            if(size[a]>=size[b]){
                parent[b]=a;
                size[a] += size[b];
            }
            else{
                parent[a]=b;
                size[b] += size[a];
            }
        }
    }
};

struct segtree{
    ll n;
    vl arr;
    vl tree;
    segtree(ll n){
        ll k=1;
        this->n = n;
        while(k<n){
            k=k*2;
        }
        k*=2;
        tree.assign(k,0);
    }
    ll merge_opn(ll x, ll y){
        return x+y;
    }
    void merge(ll node){
        tree[node]=merge_opn(tree[2*node+1],tree[2*node+2]);
    }
    
    ll range_query(ll node, ll l, ll r, ll query_l, ll query_r){
        if(r<query_l || l>query_r){
            return 0;
        }
        if(l>=query_l && r<=query_r){
            return tree[node];
        }
        ll mid = (l+r)/2;
        ll left=range_query(2*node+1,l,mid,query_l,query_r);
        ll right=range_query(2*node+2,mid+1,r,query_l,query_r);
        return merge_opn(left,right);
    }
    
    ll range_query(ll query_l, ll query_r){
        return range_query(0,0,n-1,query_l,query_r-1);
    }
    
    void point_update(ll node, ll l, ll r, ll idx, ll val){
        if(r-l==0){
            tree[node]=val;
            return;
        }
        ll mid = (l+r)/2;
        if(idx>mid){
            point_update(2*node+2,mid+1,r,idx,val);
        }
        else{
            point_update(2*node+1,l,mid,idx,val);
        }
        merge(node);
    }
    
    void point_update(ll idx, ll val){
        point_update(0,0,n-1,idx,val);
    }
};


bool mycompare(pll p1 ,pll p2){
    if(p1.first<p2.first){return true;}
    else if(p1.first==p2.first){return p1.second<p2.second;}
    else{return false;}
}

void solve_mul(){
    ll test;
    cin>>test;
    rep(i,0,test){
        solve();
    }
}

void solve(){
    string s;
    ll n;
    cin>>n;
    ll ar=(n*(n-1))/2;
    vl arr(ar,0);
    rev(arr,ar);
    sor(arr);
    ll k=n-1;
    ll i=0;
    vl ans;
    while(k!=0){
        ans.pb(arr[i]);
        i+=k;
        k--;
    }
    ans.pb(arr[ar-1]);
    prv(ans);
}

void solvg(){
    ll n,m;
    cin>>n>>m;
    vl a;
    vvl arr(n,a);
    rep(i,0,m){
        ll x,y;
        cin>>x>>y;
        arr[x-1].pb(y);
        arr[y-1].pb(x);
    }
}

signed main(){
    make_it_fast();
    //seiv();
    solve_mul();
    //solve();
    //solvg();
    return 0;
}