#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,k,w;
    cin>>k>>n>>w;
    if(w*(w+1)*k/2-n<=0){
        cout<<0;
    }
    else{
        cout<<w*(w+1)*k/2-n;
    }
}