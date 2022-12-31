

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

# define ll long long int
# define vec vector<long long int>

using namespace std;

void read_array(ll * &arr,ll n){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    return;
}

ll print_array(ll * &arr,ll n){
    ll sum=1;
    for(ll i=0;i<n;i++){
        sum*=arr[i];
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll y,w;
        cin>>y>>w;
        if(y==w){
            cout<<"1/1"<<endl;
        }
        else{
            if(y>w){
                ll a=y;
                if(a%6==0){
                    cout<<"1/6"<<endl;
                }
                else if(a%3==0){
                    cout<<"2/3"<<endl;
                }
                else if(a%4==0){
                    cout<<"1/2"<<endl;
                }
                else if(a%2==0){
                    cout<<"5/6"<<endl;
                }
                else if(a%5==0){
                    cout<<"1/3"<<endl;
                }
                else{
                    cout<<"1/1"<<endl;
                }
            }
        }
    }
    return 0;
}