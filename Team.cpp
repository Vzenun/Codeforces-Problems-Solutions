#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int s=0;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==1 && b==1){
            s++;
        }
        else if(a==1 && c==1){
            s++;
        }
        else if(c==1 && b==1){
            s++;
        }
    }
    cout<<s;
    return 0;
}