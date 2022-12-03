#include<iostream>
#include<string>
#include<climits>
#include<cmath>
#include<vector>
#include<stack>
#include<algorithm>
#include<set>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        vec arr;
        for(ll j=0;j<n;j++){
            ll k;
            cin>>k;
            arr.push_back(k);
        }
        ll countodd=0;
        ll counteven=0;
        for(ll j=0;j<n;j++){
            if(arr[j]%2!=j%2){
                if(arr[j]%2==0){
                    counteven++;
                }
                else{
                    countodd++;
                }
            }
        }
        if(counteven==countodd){
            cout<<counteven<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}