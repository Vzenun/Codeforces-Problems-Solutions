// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

# define ll long long int

int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        string k=to_string(n);
        ll m=k.size();
        ll a=k[0]-'0';
        ll sum=10*(a-1);
        m=m%4;
        if(m==0){
            sum+=10;
        }
        else{
            sum+=(m*(m+1))/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}