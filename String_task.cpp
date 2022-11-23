#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<numeric>
#include<numbers>
#include<vector>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> arr;
    for(int i=0;i<s.size();i++){
        if(s[i]>97 && s[i]<=122 && s[i]!=101 && s[i]!=105 && s[i]!=111 && s[i]!=117){
            arr.push_back(s[i]);
        }
        else if(s[i]>65 && s[i]<=90 && s[i]!=69 && s[i]!=32 && s[i]!=79 && s[i]!=85){
            arr.push_back(s[i]+32);
        }
    }
    s.clear();
    for(int i=0;i<arr.size();i++){
        s+='.';
        s+=arr[i];
    }
    cout<<s;
    return 0;
}