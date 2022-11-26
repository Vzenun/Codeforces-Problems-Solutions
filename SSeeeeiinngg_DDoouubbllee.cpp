#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int test;
    cin>>test;
    for(long long int i=0;i<test;i++){
        string s;
        cin>>s;
        for(long long int j=0;j<s.size();j++){
            cout<<s[j];
        }
        for(long long int j=0;j<s.size();j++){
            cout<<s[s.size()-j-1];
        }
        cout<<endl;
    }
    return 0;
}