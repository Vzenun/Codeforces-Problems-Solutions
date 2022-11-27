#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int test;
    cin>>test;
    for(long long int i=0;i<test;i++){
        long long int n;
        cin>>n;
        if(n<2020){
            cout<<"NO"<<endl;
        }
        else{
            long long int k=n/2020;
            long long int m=n-k*2020;
            if(m>k){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}