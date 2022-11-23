#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long int x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        if(x==y){
            if(2*a*x)
            cout<<b*x<<endl;
        }
        else if(x>y){
            cout<<b*y+a*(x-y)<<endl;
        }
        else{
            cout<<b*x+a*(y-x)<<endl;
        }
    }
    return 0;
}