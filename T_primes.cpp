#include<iostream>
#include<string>
#include<climits>
#include<cmath>
#include<vector>
#include<stack>
#include<algorithm>
#include<set>

# define ll long long int

using namespace std;

int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        if(n==1){
            cout<<"NO"<<endl;
        }
        else if(ceil(sqrt((double)n))==floor(sqrt((double)n))){
            ll k=(ll)ceil(sqrt((double)n));
            ll flag=0;
            if(ceil(sqrt((double)k))==floor(sqrt((double)k))){
                cout<<"NO"<<endl;
            }
            else{
                for(int i=2;i*i<=k;i++){
                    if(k%i==0){
                        cout<<"NO"<<endl;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<"YES"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}