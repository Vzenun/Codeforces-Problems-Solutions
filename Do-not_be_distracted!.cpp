#include<iostream>
#include<string>
#include<climits>
#include<cmath>
#include<vector>
#include<stack>
#include<algorithm>
#include<set>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll arr[26]={0};
        vec arr2;
        arr2.push_back(s[0]-'A');
        for(int i=0;i<n-1;i++){
            if(s[i]-'A'!=s[i+1]-'A'){
                arr2.push_back(s[i+1]-'A');
            }
        }
        ll flag=0;
        for(int i=0;i<arr2.size();i++){
            if(arr[arr2[i]]==0){
                arr[arr2[i]]=1;
            }
            else{
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}