// Vidur Goel

//Codeforcees Handle: Vidurcodviz

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
#define sorr(x) sort(x.rbegin(),x.rend()) // this is in order to do sorting in descending order
#define lb lower_bound
#define ub upper_bound
#define pb push_back
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
#define setbits(n) __builtin_popcount(n)

ll seiv[1000001]={0};

string yup="YES";
string nope="NO";

ll lmin(vl arr){return *min_element(arr.begin(),arr.end());}
ll lmax(vl arr){return *max_element(arr.begin(),arr.end());}

ll fibonacci(ll n){ll a=0;ll b=1;ll c;if(n==0 || n==1){return n;}for(ll i=2;i<n+1;i++){c=a+b;a=b;b=c;}return c;}

ll sum(vl a){ll sum=0;rep(i,0,a.size()){sum+=a[i];}return sum;}
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
    A) double sqrt(double arg): It returns the square root of a number to type double. 
    B) float sqrtf(float arg): It returns the square root of a number to type float.
    C) long double sqrtl(long double arg): It returns the square root of a number to type long double with more precision. 
    Advised to always use C) as always give correct one as other may halt in case of the big numbers
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

    lower_bound(v.begin(), v.end(), 6) these are the syntax
    upper_bound(v.begin(), v.end(), 6)

    In multiset to remove all element of a same number use a.erase()
    else to remove 1 lement only use ans.erase(ans.find(*it)) here it is the iterator

    priority_queue<int, vector<int>, greater<int> > gquiz(arr, arr + n);
    Here above is the syntax of the min_heap implementation with the help of the priority queue and here push() and pop() and top() are the main operations
    priority_queue<int> gquiz(arr, arr + n);
    Here above is the syntax of the max_heap implementation with the help of the priority queue and here push() and pop() and top() are the main operations

    Whenever need to do the hashing always use the map which is the stl template of hashing never use the array indexing method.
    map.find() function has complexity 0(logn)
    map.insert function has complexity 0(1)
    __builtin_popcount(n) - we use this function to count the number of 1's (set bits) in the number in binary form
    __builtin_parity(n) - this is boolean function which return true if number of 1's in binary form of n are odd else returns false;
    __builtin_clz(n) - eg: Binary form of 16 is 00000000 00000000 00000000 00010000 therefore will return the number of the leading zeroes in n here answer will be 27
    __builtin_ctz(n) - eg: Binary form of 20 is 00000000 00000000 00000000 00010100 therefore will return the number of the trailing zeroes in n here answer will be 2

    An important info about the lower_bound used in various data structures
    actually if number is present they will return te iterator pointing to that number in the data structure otherwise return the
    next iterator in that data structure so depends whether sorted in ascending or descending order.
    An important info about the upper_bound used in various data structures
    is that it will return the iterator pointing to the next iterator to which the number should be there also depends on the sorting order
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
        solve_single();
    }
}

void solve_single(){
    ll n,k;
    cin>>n>>k;
    if(k%2!=0){
        cout<<yup<<nn;
        rep(i,0,n/2){
            cout<<2*i+1<<" "<<2*(i+1)<<nn;
        }
    }
    else{
        if(k%4==2){
            cout<<yup<<nn;
            rep(i,1,n/2+1){
                if(i%2==0){
                    cout<<2*i-1<<" "<<2*i<<nn;
                }
                else{
                    cout<<2*i<<" "<<2*i-1<<nn;
                }
            }
        }
        else{
            cout<<nope<<nn;
        }
    }
}

void solve_array(){
    ll n;
    cin>>n;
    vl arr(n,0);
    rev(arr,n);
}

int main(){
    make_it_fast();
    //seive();
    solve_mul();
    //solve_array();
    //solve_single();
    return 0;
}