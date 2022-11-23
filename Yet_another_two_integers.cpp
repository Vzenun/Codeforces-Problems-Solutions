#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
using namespace std;



int main(){
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a>b){
            int k=(a-b)/10;
            if((a-b)%10!=0){
                k=k+1;
            }
            cout<<k<<endl;
        }
        else if(b>a){
            int k=(b-a)/10;
            if((b-a)%10!=0){
                k=k+1;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}
