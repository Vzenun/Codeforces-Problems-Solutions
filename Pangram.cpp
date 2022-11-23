#include<iostream>
#include<string>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            arr[s[i]-'A']=1;
        }
        else{
            arr[s[i]-'a']=1;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}