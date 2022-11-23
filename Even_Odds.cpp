#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    if(n%2==0 && k<=n/2){
        cout<<2*k-1;
    }
    else if(n%2==0 && k>n/2){
        cout<<(k-n/2)*2;
    }
    else if(n%2!=0 && k>n/2+1){
        cout<<(k-n/2-1)*2;
    }
    else{
        cout<<2*k-1;
    }
}
