#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<3;i++){
            sum1+=s[i]-'0';
            sum2+=s[i+3]-'0';
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}