//Vidur goel

#include<iostream>
#include<string>
#include<cmath>

#include<climits>
#include<algorithm>
#include<vector>

#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test; //number of test caases
    cin>>test;
    for(ll i=1;i<=test;i++){
        ll n;
        cin>>n;
        ll arr[n];
        ll count1=0;
        ll count2=0;
        for(ll j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1%2==0 && count2%2==0){
            cout<<"YES"<<endl;
        }
        else if(count1%2!=0 && count2%2==0){
            cout<<"NO"<<endl;
        }
        else if(count1%2!=0 && count2%2!=0){
            cout<<"NO"<<endl;
        }
        else if(count1%2==0 && count2%2!=0){
            if(count1==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}