#include<iostream>
#include<cmath>
#include<algorithm>
#include<climits>
#include<string>

using namespace std;

# define ll long long int

int main(){
    ll test;
    cin>>test;
    for(ll k1=0;k1<test;k1++){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        ll i=0;
        ll j=n-1;
        ll count=0;
        while(count<k && i<n && j>=0){
            if(a[i]<b[j]){
                a[i]=b[j];
                j--;
                i++;
                count++;
            }
            else{
                j--;
            }
        }
        ll sum=0;
        for(ll am=0;am<n;am++){
            sum+=a[am];
        }
        cout<<sum<<endl;
    }
}