#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    if(n==m){
        if(n%2==0){
            cout<<"Malvika"<<endl;
            return 0;
        }
        else{
            cout<<"Akshat"<<endl;
            return 0;
        }
    }
    else{
        if(n>m){
            if(m%2==0){
                cout<<"Malvika"<<endl;
                return 0;
            }
            else{
                cout<<"Akshat"<<endl;
                return 0;
            }
        }
        else{
            if(n%2==0){
                cout<<"Malvika"<<endl;
                return 0;
            }
            else{
                cout<<"Akshat"<<endl;
                return 0;
            }
        }
    }
    return 0;
}