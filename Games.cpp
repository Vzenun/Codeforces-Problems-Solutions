#include<iostream>
#include<string>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h[n];
    int g[n];
    for(int i=0;i<n;i++){
        cin>>h[i]>>g[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(h[i]==g[j]){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}