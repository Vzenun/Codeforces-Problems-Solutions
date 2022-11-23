#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int count=0;
    if(m*a>=b){
        count+=(n/m)*b;
        if((n-((n/m)*m))*a<b){
            count+=(n-((n/m)*m))*a;
            cout<<count;
        }
        else{
            count+=b;
            cout<<count;
        }
    }
    else{
        cout<<n*a;
    }
}
