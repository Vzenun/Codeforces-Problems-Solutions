#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll k=0;
    while(n-k>=0){
        if(-n+2*k>=0 && n-k>=0){
            cout<<-n+2*k+n-k<<endl;
            return 0;
        }
        k+=m;
    }
    cout<<-1<<endl;
    return 0;
}