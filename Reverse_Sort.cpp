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
#define vec vector<ll>
#define nn endl

using namespace std;
using namespace chrono;

ll fibonacci(ll n){
    ll fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for(ll i=2;i<n+1;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}

int main(){
    make_it_fast();
    
    return 0;
}