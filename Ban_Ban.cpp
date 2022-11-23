#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
using namespace std;



int main(){
    long long int n;
    cin>>n;
    for(long long int j=0;j<n;j++){
        long long int t;
        cin>>t;
        if(t==1){
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(t%2==0){
            cout<<t/2<<endl;
            for(long long int i=0;i<t/2;i++){
                cout<<3*i+1<<" "<<3*(t-i)<<endl;
            }
        }
        else{
            cout<<t/2+1<<endl;
            for(long long int i=0;i<t/2;i++){
                cout<<3*i+1<<" "<<3*(t-i)<<endl;
            }
            cout<<3*(t/2)+1<<" "<<3*(t/2+1)<<endl;
        }
    }
    return 0;
}
