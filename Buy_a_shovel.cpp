// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstdio>
#include<cstring>

# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll k,r;
    cin>>k>>r;
    if(k%10==0){
        cout<<1<<endl;
    }
    else if(k%2==0){
        if(r%2!=0){
            cout<<5<<endl;
        }
        else{
            ll m[5];
            for(ll i=1;i<=5;i++){
                m[i-1]=k*i;
                if((m[i-1]-r)%10==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    else if(k%5==0){
        if(r==5){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else{
        ll m[9];
        for(ll i=1;i<=9;i++){
            m[i-1]=k*i;
            if((m[i-1]-r)%10==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}