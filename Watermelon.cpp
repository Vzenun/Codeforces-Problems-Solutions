#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%2==0 && n!=2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}