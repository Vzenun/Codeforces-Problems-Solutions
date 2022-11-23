#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    string s;
    cin>>s;
    int num=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'){
            num++;
        }
        else if(s[i]=='7'){
            num++;
        }
    }
    if(num==4 || num==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
