#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    for(ll j=0;j<n;j++){
        ll k;
        cin>>k;
        string s;
        cin>>s;
        if(k%3==2){
            cout<<"NO"<<endl;
            continue;
        }
        ll flag=0;
        int a=0;
        for(ll i=0;i<k;i++){
            if(flag==0){
                flag=1;
            }
            else if(flag==1){
                if(i+1<k){
                    if(s[i]==s[i+1]){
                        flag=0;
                        i++;
                    }
                    else{
                        cout<<"NO"<<endl;
                        a=1;
                        break;
                    }
                }
                else{
                    cout<<"NO"<<endl;
                    a=1;
                    break;
                }
            }
        }
        if(a==0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}