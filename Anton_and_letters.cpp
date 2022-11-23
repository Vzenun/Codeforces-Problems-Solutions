#include<iostream>
#include<string>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        //cout<<s[i];
        if(s[i]>=97 && s[i]<=122){
            arr[s[i]-'a']=1;
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(arr[i]==1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}