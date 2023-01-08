//Vidur Goel

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
#include<chrono>
#include<random>
#include<cassert>

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define iter(x) (x).begin(), (x).end()

# define ll long long int
# define vec vector<long long int>

using namespace std;
using namespace chrono;

void read_array(ll * &arr,ll n){for(ll i=0;i<n;i++){cin>>arr[i];}return;}

int main(){
    make_it_fast();
    ll n;
    cin>>n;
    string s=to_string((n));
    string k=s;
    ll fl=0;
    while(s[fl]=='9'){
        fl++;
    }
    ll flag=0;
    if(fl>=1){
        flag=1;
    }
    if(fl==s.size()){
        cout<<9;
        for(ll j=0;j<s.size()-1;j++){
            cout<<0;
        }
        return 0;
    }
    for(ll i=0;i<s.size();i++){
        if(flag==1){
            if(s[i]-'0'>=5 && i>=1){
                s[i]='0'+9-(s[i]-'0');
            }
        }
        else{
            if(s[i]-'0'>=5){
                s[i]='0'+9-(s[i]-'0');
            }
        }
    }
    ll i=0;
    while(k[i]=='0'){
        i++;
    }
        while(i<s.size()){
            cout<<s[i];
            i++;
        }
    return 0;
}