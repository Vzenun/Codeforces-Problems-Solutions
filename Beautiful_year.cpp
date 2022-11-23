#include<iostream>
#include<cmath>

using namespace std;

bool check(int n){
    string s=to_string(n);
    if(s[0]!=s[1] && s[1]!=s[2] && s[2]!=s[3] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[3]){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    while(!check(n+1)){
        n=n+1;
    }
    cout<<n+1;
}