// Vidur Goel

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
    ll n;
    cin>>n;
    ll arr[3];
    for(ll i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    ll min=arr[0];
    ll mid=arr[1];
    ll max=arr[2];
    if(n%min==0){
        cout<<n/min<<endl;
    }
    else{
        if()
    }
    return 0;
}