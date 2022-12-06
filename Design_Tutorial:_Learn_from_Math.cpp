// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n%2==0){
        if((n/2)%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            cout<<n/2+1<<" "<<n/2-1<<endl;
        }
    }
    else{
        ll k=n/2;
        while(!(k%3==0 && k%2!=0)){
            k++;
        }
        cout<<k<<" "<<n-k<<endl;
    }
    return 0;
}