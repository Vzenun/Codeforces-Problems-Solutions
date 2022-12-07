#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            if(2*b>a){
                cout<<4*b*b<<endl;
            }
            else if(2*b==a){
                cout<<2*b*a<<endl;
            }
            else{
                cout<<a*a<<endl;
            }
        }
        else if(a==b){
            cout<<4*a*a<<endl;
        }
        else{
            ll temp=a;
            a=b;
            b=temp;
            if(2*b>a){
                cout<<4*b*b<<endl;
            }
            else if(2*b==a){
                cout<<2*b*a<<endl;
            }
            else{
                cout<<a*a<<endl;
            }
        }
    }
    return 0;
}