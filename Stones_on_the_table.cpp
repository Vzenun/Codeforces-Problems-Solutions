#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int num=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            num++;
        }
    }
    cout<<num;
}