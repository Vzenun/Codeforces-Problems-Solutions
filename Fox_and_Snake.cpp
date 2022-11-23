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
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<m;j++){
                if(i%4==1){
                    if(j==m-1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else if(i%4==3){
                    if(j==0){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}