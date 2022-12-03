// Vidur Goel

#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="1" || s=="0"){
            cout<<"NET"<<endl;
        }
        else{
            int num1=0;
            int num0=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='0'){
                    num0++;
                }
                else if(s[i]=='1'){
                    num1++;
                }
            }
            if(num1==0 || num0==0){
                cout<<"NET"<<endl;
            }
            else{
                int k=min(num1,num0);
                if(k%2==1){
                    cout<<"DA"<<endl;
                }
                else{
                    cout<<"NET"<<endl;
                }
            }
        }
    }
    return 0;
}