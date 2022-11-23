#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    string k,s;
    cin>>k>>s;
    if(k.size()!=s.size()){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<k.size();i++){
        if(k[i]!=s[k.size()-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}