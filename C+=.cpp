// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

# define ll long long int

using namespace std;

ll answer(ll total,ll a,ll b,ll n){
    if(a>b){
        if(a>n){
            return total;
        }
        else{
            total+=1;
            b=a+b;
            return answer(total,a,b,n);
        }
    }
    else{
        if(b>n){
            return total;
        }
        else{
            total+=1;
            a=a+b;
            return answer(total,a,b,n);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll a,b,n;
        cin>>a>>b>>n;
        cout<<answer(0,a,b,n)<<endl;
    }
    return 0;
}