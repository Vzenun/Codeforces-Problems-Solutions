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
        string s;
        cin>>s;
        int sum=0;
        for(int j=0;j<n;j++){
            if(s[j]=='0'){
                for(int k=j;k<n;k=k+j+1){
                    if(s[j]=='1'){
                        break;
                    }
                    else{
                        sum+=j+1;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}