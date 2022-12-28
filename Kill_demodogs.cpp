

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

# define ll unsigned long long int
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

ll arm=pow(10,9)+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        if(n%3==0){
            ll y=n/3;
            y=y%arm;
            ll m=(n+1)%arm;
            ll r=(2*n+1)%arm;
            ll k=(y)*(m);
            k=k%arm;
            k=k*r;
            k=k%arm;
            if(n%2==0){
                ll b=n/2;
                b=b%arm;
                ll c=(n+1)%arm;
                ll ans=b*c;
                ans=ans%arm;
                //k-=ans;
                if(ans>k){
                    k=k-ans+arm;
                }
                else{
                    k-=ans;
                }
            }
            else{
                ll b=n+1;
                b=b/2;
                b=b%arm;
                ll c=n%arm;
                ll ans=b*c;
                ans=ans%arm;
                //k-=ans;
                if(ans>k){
                    k=k-ans+arm;
                }
                else{
                    k-=ans;
                }
            }
            k=k%arm;
            k=2022*k;
            k=k%arm;
            cout<<k<<endl;
        }
        else if(n%3==1){
            ll y=2*n+1;
            y=y/3;
            y=y%arm;
            ll r=n%arm;
            ll m=(n+1)%arm;
            ll k=(y)*(m);
            k=k%arm;
            k=k*r;
            k=k%arm;
            if(n%2==0){
                ll b=n/2;
                b=b%arm;
                ll c=(n+1)%arm;
                ll ans=b*c;
                ans=ans%arm;
                if(ans>k){
                    k=k-ans+arm;
                }
                else{
                    k-=ans;
                }
            }
            else{
                ll b=n+1;
                b=b/2;
                b=b%arm;
                ll c=n%arm;
                ll ans=b*c;
                ans=ans%arm;
                if(ans>k){
                    k=k-ans+arm;
                }
                else{
                    k-=ans;
                }
            }
            k=k%arm;
            k=2022*k;
            k=k%arm;
            cout<<k<<endl;
        }
        else{
            ll y=n+1;
            y=y/3;
            y=y%arm;
            ll m=2*n+1;
            m=m%arm;
            ll r=n%arm;
            ll k=(y)*(m);
            k=k%arm;
            k=k*r;
            k=k%arm;
            if(n%2==0){
                ll b=n/2;
                b=b%arm;
                ll c=(n+1)%arm;
                ll ans=b*c;
                ans=ans%arm;
                if(ans>k){
                    k=k-ans+arm;
                }
                else{
                    k-=ans;
                }
            }
            else{
                ll b=n+1;
                b=b/2;
                b=b%arm;
                ll c=n%arm;
                ll ans=b*c;
                ans=ans%arm;
                if(ans>k){
                    k=k-ans+arm;
                }
                else{
                    k-=ans;
                }
            }
            k=2022*k;
            k=k%arm;
            cout<<k<<endl;
        }
    }
    return 0;
}