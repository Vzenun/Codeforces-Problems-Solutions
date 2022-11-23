#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(s.length()>10){
            string k;
            k=s[0]+to_string(s.length()-2)+s[s.length()-1];
            cout<<k<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;

}