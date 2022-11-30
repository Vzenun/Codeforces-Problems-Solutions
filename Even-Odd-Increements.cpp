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
        ll n,q;
        cin>>n>>q;
        vec arr;
        ll sum=0;
        ll count_even=0;
        ll count_odd=0;
        for(ll j=0;j<n;j++){
            ll k;
            cin>>k;
            arr.push_back(k);
            sum+=k;
            if(k%2==0){
                count_even++;
            }
            else{
                count_odd++;
            }
        }
        for(ll j=0;j<q;j++){
            ll qq,a;
            cin>>qq>>a;
            if(qq==0){
                if(a%2==0){
                    sum+=count_even*a;
                    cout<<sum<<endl;
                }
                else{
                    sum+=count_even*a;
                    cout<<sum<<endl;
                    count_odd+=count_even;
                    count_even=0;
                }
            }
            else if(qq==1){
                if(a%2==0){
                    sum+=count_odd*a;
                    cout<<sum<<endl;
                }
                else{
                    sum+=count_odd*a;
                    cout<<sum<<endl;
                    count_even+=count_odd;
                    count_odd=0;
                }
            }
        }
    }
    return 0;
}