// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
# define ll long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        ll n;
        cin>>n;
        ll sum=(n*(n+1))/2;
        sum+=(((n-2)*(n-1)*((2*n)-3))+(3*(n-2)*(n-1)))/12;
        cout<<sum<<endl;
    return 0;
    
}