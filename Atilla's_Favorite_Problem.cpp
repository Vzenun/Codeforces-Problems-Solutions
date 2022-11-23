#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long int n;
    cin>>n;
    for(unsigned long long int i=0;i<n;i++){
        unsigned long long int a=0;
        cin>>a;
        string s;
        cin>>s;
        unsigned long long int max=0;
        for(unsigned long long int i=0;i<a;i++){
            if(max<s[i]-'a'+1){
                max=s[i]-'a'+1;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}