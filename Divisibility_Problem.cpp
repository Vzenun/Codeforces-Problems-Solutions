#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            cout<<b-a%b<<endl;
        }
    }
}
