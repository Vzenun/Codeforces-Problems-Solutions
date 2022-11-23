#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

bool check(unsigned long long int n){
    unsigned long long int i=3;
    while(i*i<=n){
        cout<<i;
        //cout<<i;
        if(n%i==0){
            return true;
        }
        i+=2;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long int test;
    cin>>test;
    for(unsigned long long int i=1;i<=test;i++){
        unsigned long long int n;
        cin>>n;
        if(n%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            while(n%2==0){
                n=n/2;
            }
            if(n!=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}