#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<a+1;
        return 0;
    }
    else if(a>b){
        int k=b+1;
        a=a-b;
        k=k+(a/(b-1));
        k=k+a;
        cout<<k;
        return 0;
    }
    else{
        cout<<a;
        return 0;
    }
    return 0;
}