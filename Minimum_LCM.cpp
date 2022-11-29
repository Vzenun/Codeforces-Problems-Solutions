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
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            if(n%3==0){
                cout<<n/3<<" "<<n-n/3<<endl;
            }
            else{
                cout<<1<<" "<<n-1<<endl;
            }
        }
    }
    return 0;
}