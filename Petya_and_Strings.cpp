#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    string a,b;
    cin>>a;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(),::toupper);
    transform(b.begin(),b.end(),b.begin(),::toupper);
    int num=0;
    for(int i=0;i<a.size();i++){
        if(a[i]-b[i]==0){
            num+=0;
        }
        else{
            if(a[i]-b[i]>0){
                cout<<1;
            }
            else{
                cout<<-1;
            }
            return 0;
        }
    }
    cout<<0;
    return 0;
}