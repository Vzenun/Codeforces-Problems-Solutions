#include<cmath>
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            for(int k=0;k<=j;k++){
                if(k==0){
                    cout<<1;
                }
                else if(k==j){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            cout<<endl;
        }
    }
}