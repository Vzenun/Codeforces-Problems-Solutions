#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string k;
    cin>>k;
    for(int i=0;i<b;i++){
        string s=k;
        k.clear();
        for(int j=0;j<a;j++){
            if(j==a-1){
                k=k+s[j];
            }
            else if(s[j]=='B' && s[j+1]=='G'){
                k=k+'G';
                k=k+'B';
                j++;
            }
            else{
                k=k+s[j];
            }
        }
    }
    cout<<k;
}