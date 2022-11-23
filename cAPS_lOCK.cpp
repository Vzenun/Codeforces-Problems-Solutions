#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=0;
    int num=0;
    //cout<<s.size();
    for(int i=0;i<s.size();i++){
        //cout<<s[0];
        if(s[0]>='A' && s[0]<='Z' && i==0){
            //cout<<"Hi";
            flag=1;
        }
        else{
            if(s[i]>='A' && s[i]<='Z'){
                //cout<<"######";
                num++;
            }
        }
    }
    //cout<<num<<endl;
    if(flag==1 && num==s.length()-1){
        string b="";
        for(int i=0;i<s.length();i++){
            b=b+(char)(s[i]+32);
        }
        cout<<b<<endl;
    }
    else if(flag==0 && num==s.length()-1){
        string b="";
        for(int i=0;i<s.length();i++){
            if(i==0){
                b=b+(char)(s[0]-32);
            }
            else{
                b=b+(char)(s[i]+32);
            }
        }
        cout<<b<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return 0;
}
