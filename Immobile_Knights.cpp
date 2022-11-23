#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tests;
    cin>>tests;
    for(int i=0;i<tests;i++){
        int n,m;
        cin>>n>>m;
        if(n==1 || m==1){
            cout<<1<<" "<<1<<endl;
        }
        else if(n==2){
            if(m==2){
                cout<<1<<" "<<1<<endl;
            }
            else if(m==3){
                cout<<2<<" "<<2<<endl;
            }
            else{
                cout<<1<<" "<<1<<endl;
            }
        }
        else if(m==2){
            if(n==2){
                cout<<1<<" "<<1<<endl;
            }
            else if(n==3){
                cout<<2<<" "<<2<<endl;
            }
            else{
                cout<<1<<" "<<1<<endl;
            }
        }
        else if(m==3 && n==3){
            cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<1<<" "<<1<<endl;
        }
    }

    return 0;
}