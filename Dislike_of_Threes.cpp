#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vec a;
    ll count=1;
    ll num=1;
    while(count!=1001){
        if(num%3!=0 && num%10!=3){
            a.push_back(num);
            num++;
            count++;
        }
        else{
            num++;
        }
    }
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll k;
        cin>>k;
        cout<<a[k-1]<<endl;
    }
    return 0;
}