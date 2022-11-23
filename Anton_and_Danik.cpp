#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int num;
    cin>>num;
    string a;
    cin>>a;
    int num1=0;
    int num2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='A'){
            num1++;
        }
        else if(a[i]=='D'){
            num2++;
        }
    }
    if(num1>num2){
        cout<<"Anton";
    }
    else if(num2>num1){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}
