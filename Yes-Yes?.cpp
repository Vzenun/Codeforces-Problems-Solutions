#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
using namespace std;



int main(){
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.length()==1){
            if(s[0]=='Y' || s[0]=='e' || s[0]=='s'){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        int k=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='e' && s[i+1]!='s'){
                cout<<"NO"<<endl;
                k=1;
                break;
            }
            else if(s[i]=='s'&& s[i+1]!='Y'){
                cout<<"NO"<<endl;
                k=1;
                break;
            }
            else if(s[i]=='Y' && s[i+1]!='e'){
                cout<<"NO"<<endl;
                k=1;
                break;
            }
            else if(s[i]!='e' && s[i]!='Y' && s[i]!='s'){
                cout<<"NO"<<endl;
                k=1;
                break;
            }
        }
        if(k==0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
