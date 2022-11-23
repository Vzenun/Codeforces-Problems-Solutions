#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    string n,m;
    cin>>n>>m;
    int num=0;
    int sum=0;
    for(int i=0;i<n.size();i++){
        if((n[i]=='1' && m[i]=='0') || (n[i]=='0' && m[i]=='1')){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
}
