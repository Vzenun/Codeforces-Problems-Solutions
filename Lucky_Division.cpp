#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

bool check(int n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]!='4' && s[i]!='7'){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(check(i) || check(n/i)){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}