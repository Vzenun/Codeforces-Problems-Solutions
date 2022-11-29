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
    ll n,t;
    cin>>n>>t;
    if(n==1 && t==10){
        cout<<-1<<endl;
    }
    else{
        if(t!=10){
            for(ll i=0;i<n;i++){
                cout<<t;
            }
        }
        else{
            for(ll i=0;i<n;i++){
                if(i==0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
    }
    return 0;
}