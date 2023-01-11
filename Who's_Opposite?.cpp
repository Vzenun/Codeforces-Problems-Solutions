// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<stack>
#include<chrono>
#include<random>
#include<cassert>
#include<array>
#include<bitset>
#include<complex>
#include<cstring>
#include<functional>
#include<iomanip>
#include<map>
#include<numeric>
#include<queue>
#include<set>

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define MOD 1000000007
#define MOD1 998244353
#define sor(x) sort(all(x))


typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;
# define vec vector<ll>

using namespace std;
using namespace chrono;
ll seiv[1000001]={0};

void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}
void print_array(ll arr[],ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}


bool prime(ll n){for(int i=2;i*i<=n;i++){if(n%i==0){return false;}}return true;}
void seive(){seiv[0]=0;seiv[1]=1;for(ll i=2;i*i<1000001;i++){if(seiv[i]==0){seiv[i]=i;for(ll j=i*i;j<1000001;j=j+i){if(seiv[j]==0){seiv[j]=i;}}}}}

ll gcd(ll a,ll b){if(b==0){return a;}if(a>b){return gcd(b,a%b);}else{return gcd(b,a);}}
ll expo(ll num,ll coef){ll res=1;while(coef!=0){if(coef%2==0){coef=coef/2;num=num*num;}else{coef=coef-1;res=res*num;}}return res;}
ll expo_mod(ll a,ll n,ll m){ll res=1;while(n!=0){if(n%2==0){a=a*a;a=a%m;n=n/2;}else{res=res*a;res=res%m;n--;}}return res;}

ll add_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mul_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll sub_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// abs() is used for the absolute value of a number

void solve(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        ll k=abs(b-a);
        ll n=2*k;
        if(n<a || n<b || n<c){
            cout<<-1<<endl;
            continue;
        }
        else if(a==b){
            cout<<-1<<endl;
            continue;
        }
        else{
            ll m=(k+c)%n;
            if(m==0){
                cout<<n<<endl;
            }
            else{
                cout<<m<<endl;
            }
        }
    }
}

int main(){
    make_it_fast();
    //seive();
    solve();
    return 0;
}