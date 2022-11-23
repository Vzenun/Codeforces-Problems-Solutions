#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int client=0;
        int tech=0;
        if(s[k-1]=='Q'){
            cout<<"No"<<endl;
        }
        else{
            for(int i=0;i<k;i++){
                if(s[i]=='A'){
                    if(client>0){
                        client--;
                    }
                }
                else{
                    client++;
                }
            }
            if(client==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}