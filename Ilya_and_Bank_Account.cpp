#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int n;
    cin>>n;
    if(n>=10){
        cout<<n<<endl;
    }
    else if(n<=-10 && n%10==0 &&n>=-99){
        cout<<0<<endl;
    }
    else{
        string s=to_string(n);
        if(s[s.length()-1]>=s[s.length()-2]){
            s=s.substr(0,s.length()-1);
            cout<<s<<endl;
        }
        else{
            string k=s.substr(0,s.length()-2);
            k=k+s[s.length()-1];
            cout<<k<<endl;
        }
    }
    return 0;
}