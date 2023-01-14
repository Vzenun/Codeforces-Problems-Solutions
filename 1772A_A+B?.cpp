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

void solve_array();
void solve_single();
void solve_mul();

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define MOD 1000000007
#define MOD1 998244353
#define sor(x) sort(all(x))
# define vec vector<ll>

using namespace std;
using namespace chrono;
ll seiv[1000001]={0};

void copy_array(ll * &arr,ll * &brr,ll n){copy(arr,arr+n,brr);}
void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}
void print_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}
void print_array(ll arr[],ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}
void print_array(vec &arr,ll n){for(ll i=0;i<n;i++){cout<<i<<" "<<arr[i]<<endl;}return;}

bool prime(ll n){for(int i=2;i*i<=n;i++){if(n%i==0){return false;}}return true;}
void seive(){seiv[0]=0;seiv[1]=1;for(ll i=2;i*i<1000001;i++){if(seiv[i]==0){seiv[i]=i;for(ll j=i*i;j<1000001;j=j+i){if(seiv[j]==0){seiv[j]=i;}}}}}

ll gcd(ll a,ll b){if(b==0){return a;}if(a>b){return gcd(b,a%b);}else{return gcd(b,a);}}
ll expo(ll num,ll coef){ll res=1;while(coef!=0){if(coef%2==0){coef=coef/2;num=num*num;}else{coef=coef-1;res=res*num;}}return res;}
ll expo_mod(ll a,ll n,ll m){ll res=1;while(n!=0){if(n%2==0){a=a*a;a=a%m;n=n/2;}else{res=res*a;res=res%m;n--;}}return res;}

ll add_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mul_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll sub_mod(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

// abs() is used for the absolute value of a number
// sort() inbuilt function in cpp

void Merge_two_arr(vec &arr,vec &brr,ll i,ll m,ll j){ll size1=m-i+1;ll size2=j-m;ll a[size1];ll a1[size1];ll b[size2];ll b1[size2];for(ll k=0;k<size1;k++){a[k]=arr[i+k];a1[k]=brr[i+k];}for(ll k=0;k<size2;k++){b[k]=arr[m+1+k];b1[k]=brr[m+1+k];}ll k=i;ll st=0;ll end=0;while(st<size1 && end<size2){if(a[st]<=b[end]){arr[k]=a[st];brr[k]=a1[st];st++;k++;}else{arr[k]=b[end];brr[k]=b1[end];end++;k++;}}while(st<size1){arr[k]=a[st];brr[k]=a1[st];st++;k++;}while(end<size2){arr[k]=b[end];brr[k]=b1[end];end++;k++;}}
void mergeSort_two_arr(vec &arr,vec &brr,ll i,ll j){if(i<j){ll m=(i+j)/2;mergeSort_two_arr(arr,brr,i,m);mergeSort_two_arr(arr,brr,m+1,j);Merge_two_arr(arr,brr,i,m,j);}}

void Merge_two_arr(ll * &arr,ll * &brr,ll i,ll m,ll j){ll size1=m-i+1;ll size2=j-m;ll a[size1];ll a1[size1];ll b[size2];ll b1[size2];for(ll k=0;k<size1;k++){a[k]=arr[i+k];a1[k]=brr[i+k];}for(ll k=0;k<size2;k++){b[k]=arr[m+1+k];b1[k]=brr[m+1+k];}ll k=i;ll st=0;ll end=0;while(st<size1 && end<size2){if(a[st]<=b[end]){arr[k]=a[st];brr[k]=a1[st];st++;k++;}else{arr[k]=b[end];brr[k]=b1[end];end++;k++;}}while(st<size1){arr[k]=a[st];brr[k]=a1[st];st++;k++;}while(end<size2){arr[k]=b[end];brr[k]=b1[end];end++;k++;}}
void mergeSort_two_arr(ll * &arr,ll * &brr,ll i,ll j){if(i<j){ll m=(i+j)/2;mergeSort_two_arr(arr,brr,i,m);mergeSort_two_arr(arr,brr,m+1,j);Merge_two_arr(arr,brr,i,m,j);}}

void Merge_two_arr1(ll arr[],ll brr[],ll i,ll m,ll j){ll size1=m-i+1;ll size2=j-m;ll a[size1];ll a1[size1];ll b[size2];ll b1[size2];for(ll k=0;k<size1;k++){a[k]=arr[i+k];a1[k]=brr[i+k];}for(ll k=0;k<size2;k++){b[k]=arr[m+1+k];b1[k]=brr[m+1+k];}ll k=i;ll st=0;ll end=0;while(st<size1 && end<size2){if(a[st]<=b[end]){arr[k]=a[st];brr[k]=a1[st];st++;k++;}else{arr[k]=b[end];brr[k]=b1[end];end++;k++;}}while(st<size1){arr[k]=a[st];brr[k]=a1[st];st++;k++;}while(end<size2){arr[k]=b[end];brr[k]=b1[end];end++;k++;}}
void mergeSort_two_arr1(ll arr[],ll brr[],ll i,ll j){if(i<j){ll m=(i+j)/2;mergeSort_two_arr1(arr,brr,i,m);mergeSort_two_arr1(arr,brr,m+1,j);Merge_two_arr1(arr,brr,i,m,j);}}

void solve_mul(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        solve_single();
    }
}

void solve_single(){
    string s;
    cin>>s;
    cout<<(s[0]-'0')+(s[2]-'0')<<endl;
}

void solve_array(){
    ll n;
    cin>>n;
    ll * arr=new ll[n];
    read_array(arr,n);
}

int main(){
    make_it_fast();
    //seive();
    solve_mul();
    //solve_array();
    //solve_single();
    return 0;
}