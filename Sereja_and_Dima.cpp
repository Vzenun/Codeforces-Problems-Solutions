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
    ll k;
    cin>>k;
    vec a;
    for(ll i=0;i<k;i++){
        ll k;
        cin>>k;
        a.push_back(k);
    }
    ll i=0;
    ll j=k-1;
    ll s=0;
    ll d=0;
    ll flag=0;
    while(i<=j){
        if(flag==0){
            if(a[i]>=a[j]){
                s+=a[i];
                i++;
                flag=1;
            }
            else{
                s+=a[j];
                j--;
                flag=1;
            }
        }
        else{
            if(a[i]>=a[j]){
                d+=a[i];
                i++;
                flag=0;
            }
            else{
                d+=a[j];
                j--;
                flag=0;
            }
        }
    }
    cout<<s<<" ";
    cout<<d<<endl;
    return 0;
}