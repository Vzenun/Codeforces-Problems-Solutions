// Vidur Goel

//Codeforcees Handle: Vidurcodviz

/*
888b    888  .d88888b. 88888888888        .d8888b.   .d88888b.  888b     d888 8888888b.  888      8888888888 88888888888 8888888888       Y88b   d88P 8888888888 88888888888 
8888b   888 d88P" "Y88b    888           d88P  Y88b d88P" "Y88b 8888b   d8888 888   Y88b 888      888            888     888               Y88b d88P  888            888     
88888b  888 888     888    888           888    888 888     888 88888b.d88888 888    888 888      888            888     888                Y88o88P   888            888     
888Y88b 888 888     888    888           888        888     888 888Y88888P888 888   d88P 888      8888888        888     8888888             Y888P    8888888        888     
888 Y88b888 888     888    888           888        888     888 888 Y888P 888 8888888P"  888      888            888     888                  888     888            888     
888  Y88888 888     888    888           888    888 888     888 888  Y8P  888 888        888      888            888     888                  888     888            888     
888   Y8888 Y88b. .d88P    888           Y88b  d88P Y88b. .d88P 888   "   888 888        888      888            888     888                  888     888            888     
888    Y888  "Y88888P"     888            "Y8888P"   "Y88888P"  888       888 888        88888888 8888888888     888     8888888888           888     8888888888     888     
*/

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
#include<utility>
#include<string_view>
#include<deque>
#include<iterator>
#include<sstream>

using namespace std;
using namespace chrono;

void solve_array();
void solve_single();
void solve_mul();

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
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462
#define mset multiset<ll> // it contains multiple instances of the same value in ascending order
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repd(i,a,b) for(ll i=b-1;i>=a;i--)
#define nn endl
#define setbits(n) __builtin_popcount(n)

ll seiv[1000001]={0};

string yup="YES";
string nope="NO";

ll lmin(vl arr){return *min_element(arr.begin(),arr.end());}
ll lmax(vl arr){return *max_element(arr.begin(),arr.end());}

ll fibonacci(ll n){ll a=0;ll b=1;ll c;if(n==0 || n==1){return n;}for(ll i=2;i<n+1;i++){c=a+b;a=b;b=c;}return c;}

ll sum(vl a){return accumulate(a.begin(),a.end(),0);}
void rev(vl &arr,ll n){rep(i,0,n){cin>>arr[i];}return;}
void prv(vl arr){rep(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<nn;return;}

bool prime(ll n){rep(i,2,ceil(sqrt(n))){if(n%i==0){return false;}}return true;}
void seive(){seiv[0]=0;seiv[1]=1;for(ll i=2;i*i<1000001;i++){if(seiv[i]==0){seiv[i]=i;for(ll j=i*i;j<1000001;j=j+i){if(seiv[j]==0){seiv[j]=i;}}}}}

ll gcd(ll a,ll b){if(b==0){return a;}if(a>=b){return gcd(b,a%b);}else{return gcd(b,a);}}
ll expo(ll num,ll coef){ll res=1;while(coef!=0){if(coef%2==0){coef=coef/2;num=num*num;}else{coef=coef-1;res=res*num;}}return res;}
ll expo_mod(ll a,ll n,ll m){ll res=1;while(n!=0){if(n%2==0){a=a*a;a=a%m;n=n/2;}else{res=res*a;res=res%m;n--;}}return res;}

ll add_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mul_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll sub_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

/*
    sqrt() in built function to give the square root in float/double
    cbrt() in built function to give the cube root in float/double
    abs() is used for the absolute value of a number
    swap() function in c++ used to swap value of two elements of the same data type.
    toupper() This function is used for converting a lowercase character to uppercase.
    tolower() This function is used for converting an uppercase character to lowercase.
    ceil() and floor() function
    sort(vect.begin(),vect.end(), greater<int>());
    reverse(vect.begin(), vect.end());
    count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
    find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector
    
    maximium value long long can take 9, 223, 372, 036, 854, 775, 807
    2^63-1
    i.e, length of 19 only
    maximium value long long can take 18, 446, 744, 073, 709, 551, 615
    2^64-1
    i.e, length of 20 only

    map.find() function has complexity 0(logn)
    map.insert function has complexity 0(1)
    __builtin_popcount(n) - we use this function to count the number of 1's (set bits) in the number in binary form
    __builtin_parity(n) - this is boolean function which return true if number of 1's in binary form of n are odd else returns false;
    __builtin_clz(n) - eg: Binary form of 16 is 00000000 00000000 00000000 00010000 therefore will return the number of the leading zeroes in n here answer will be 27
    __builtin_ctz(n) - eg: Binary form of 20 is 00000000 00000000 00000000 00010100 therefore will return the number of the trailing zeroes in n here answer will be 2
*/

bool mycompare(pll p1 ,pll p2){
    if(p1.first<p2.first){
        return true;
    }
    else if(p1.first==p2.first){
        return p1.second<p2.second;
    }
    else{
        return false;
    }
}

void solve_mul(){
    ll test;
    cin>>test;
    rep(i,0,test){
        solve_array();
    }
}

void solve_single(){
    ll n;
    cin>>n;
}

void solve_array(){
    ll n,k;
    cin>>n>>k;
    vl arr(n,0);
    rev(arr,n);
    if(k==1 || k==n){
        cout<<yup<<nn;
        return;
    }
    vl ans;
    ll sum=0;
    ll a1=0;
    if(arr[0]>0){
        sum+=arr[0];
        a1=0;
    }
    else{
        sum+=arr[0];
        a1=1;
    }
    rep(i,1,k-1){
        if(a1==0){
            if(arr[i]>0){
                sum+=arr[i];
            }
            else{
                ans.pb(sum);
                sum=arr[i];
                a1=1;
            }
        }
        else{
            if(arr[i]>0){
                ans.pb(sum);
                sum=arr[i];
                a1=0;
            }
            else{
                sum+=arr[i];
            }
        }
    }
    ans.pb(sum);
    ll r2=ans.size();
    ans.pb(arr[k-1]);
    sum=0;
    if(arr[k]>0){
        sum+=arr[k];
        a1=0;
    }
    else{
        sum+=arr[k];
        a1=1;
    }
    rep(i,k+1,n){
        if(a1==0){
            if(arr[i]>0){
                sum+=arr[i];
            }
            else{
                ans.pb(sum);
                sum=arr[i];
                a1=1;
            }
        }
        else{
            if(arr[i]>0){
                ans.pb(sum);
                sum=arr[i];
                a1=0;
            }
            else{
                sum+=arr[i];
            }
        }
    }
    ans.pb(sum);
    sum=arr[k-1];
    // rep(i,0,ans.size()){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<nn;
    //cout<<r2<<nn;
    ll i=r2-1;
    ll j=r2+1;
        while(i!=-1 && j!=ans.size()){
            if(sum+ans[i]<0 && sum+ans[j]<0){
                cout<<nope<<nn;
                return;
            }
            if(sum+ans[i]>=sum+ans[j]){
                sum=sum+arr[i];
                i--;
            }
            else{
                sum=sum+ans[j];
                j++;
            }
        }
        cout<<yup<<nn;
        return;
}

int main(){
    make_it_fast();
    //seive();
    solve_mul();
    //solve_array();
    //solve_single();
    return 0;
}