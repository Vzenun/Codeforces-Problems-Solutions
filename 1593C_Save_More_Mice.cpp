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
typedef pair<ll,ll> pll;
typedef vector<pair<ll,ll> > vpll;
typedef vector<vector<ll> > vvl;

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
#define vec vector<ll>
#define nn endl

ll seiv[1000001]={0};

string yup="YES";
string nope="NO";

ll minar(ll * arr,ll n){return *min_element(arr,arr+n);}
ll maxar(ll * arr,ll n){return *max_element(arr,arr+n);}

ll fibonacci(ll n){ll a=0;ll b=1;ll c;if(n==0 || n==1){return n;}for(ll i=2;i<n+1;i++){c=a+b;a=b;b=c;}return c;}

void copy_array(ll * &arr,ll * &brr,ll n){copy(arr,arr+n,brr);}
void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}
void print_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}
//void print_array(ll arr[],ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}
void print_array(vec &arr,ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}

bool prime(ll n){for(int i=2;i*i<=n;i++){if(n%i==0){return false;}}return true;}
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
    sort() inbuilt function in cpp
    swap() function in c++ used to swap value of two elements of the same data type.
    toupper() This function is used for converting a lowercase character to uppercase.
    tolower() This function is used for converting an uppercase character to lowercase.
    ceil() and floor() function
    vector<ll> vect(arr, arr+n) used to make a vector containg same elements as that of the array arr
    sort(vect.begin(),vect.end(), greater<int>());
    sort(arr,arr+n, greater<ll>()) sort in the decreasing order
    reverse(vect.begin(), vect.end());
    reverse(arr,arr+n);
    accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements eg: accumulate(arr,arr+n,0) will give summation of the array
    count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
    find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector
    find(vect.begin(), vect.end(),5) != vect.end()?
                        cout << "\nElement found":
                    cout << "\nElement not found";
    maximium value long long can take 9, 223, 372, 036, 854, 775, 807
    2^63-1
    i.e, length of 19 only
    maximium value long long can take 18, 446, 744, 073, 709, 551, 615
    2^64-1
    i.e, length of 20 only

    reverse(s.begin(), s.end()); to reverse the string.(in built function)
    set<int, greater<int> > s1;
    s1.insert(10);
    set<int> a;

by default the sets are sorted in the ascending order

    this is how we are going to use the pair here
    vector< pair<ll,ll> > v;
    ll count=1;
    for(ll i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            v.push_back(make_pair(count,arr[i]));
            count=1;
        }
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    v.pb(make_pair(count,arr[n-1]));
    sort(v.begin(),v.end(),mycompare);
*/

bool mycompare(pair<ll, ll> p1 ,pair<ll, ll> p2){
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
    for(ll i=0;i<test;i++){
        solve_array();
    }
}

void solve_single(){
    ll n;
    cin>>n;
}

void solve_array(){
    ll t,n;
    cin>>t>>n;
    ll * arr=new ll[n];
    read_array(arr,n);
    sort(arr,arr+n);
    ll j=n-1;
    ll i=0;
    ll k=0;
    ll num=0;
    while(i!=j){
        if(sum)
    }
}

int main(){
    make_it_fast();
    //seive();
    solve_mul();
    //solve_array();
    //solve_single();
    return 0;
}