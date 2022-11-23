#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n/2;
            count+=1;
        }
    }
    cout<<count;

    // cout<<endl<<-1%4;
}
