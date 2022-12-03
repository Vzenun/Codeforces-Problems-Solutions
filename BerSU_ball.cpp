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
    vec boy;
    ll k;
    for(ll i=0;i<n;i++){
        cin>>k;
        boy.push_back(k);
    }
    ll m;
    cin>>m;
    vec girl;
    for(ll i=0;i<m;i++){
        cin>>k;
        girl.push_back(k);
    }
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    ll i=0;
    ll j=0;
    ll count=0;
    while(i!=n && j!=m){
        if(boy[i]==girl[j]){
            i++;
            j++;
            count++;
        }
        else if(boy[i]-girl[j]==1 || boy[i]-girl[j]==-1){
            i++;
            j++;
            count++;
        }
        else if(boy[i]<girl[j]){
            i++;
        }
        else if(boy[i]>girl[j]){
            j++;
        }
    }
    cout<<count<<endl;
    return 0;
}