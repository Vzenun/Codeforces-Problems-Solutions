#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int m,n;
    cin>>n>>m;
    if(n<m){
        cout<<n;
    }
    else if(n==m){
        cout<<m+1;
    }
    else{
        long long int k=1+(n-m)/(m-1);
        cout<<n+k;
    }
    return 0;
}