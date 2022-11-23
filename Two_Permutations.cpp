#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int n,a,b;
        cin>>n>>a>>b;
        if(n==1){
            if(a==1 && b==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(n==2){
            if(a==b && (a==1 || a==2)){
                cout<<"NO"<<endl;
            }
            else if(a>n || b>n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(n==3){
            if(a==b && (a==1 || a==2 || a==3)){
                cout<<"NO"<<endl;
            }
            else if(a>n || b>n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(a==b){
                cout<<"NO"<<endl;
            }
            else if(a>n || b>n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    
    return 0;
}