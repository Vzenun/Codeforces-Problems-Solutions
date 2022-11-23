#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string k=a[0];
    string b;
    int a1=0;
    int a2=0;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            a1++;
        }
        else{
            b=a[i];
            a2++;
        }
    }
    if(a1>a2){
        cout<<k;
    }
    else{
        cout<<b;
    }
    return 0;
}