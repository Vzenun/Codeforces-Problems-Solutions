#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    string a;
    cin>>a;
    string b=a;

    int n=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>=97){
            n++;
        }
    }
    if(a.size()%2==0 && n>=(a.size()/2)){
        transform(b.begin(),b.end(),b.begin(),::tolower);
    }
    else if(a.size()%2==0 && n<(a.size()/2)){
        transform(b.begin(),b.end(),b.begin(),::toupper);
    }
    else if(a.size()%2!=0 && n>=(a.size()/2)+1){
        transform(b.begin(),b.end(),b.begin(),::tolower);
    }
    else if(a.size()%2!=0 && n<(a.size()/2)+1){
        transform(b.begin(),b.end(),b.begin(),::toupper);
    }
    cout<<b;
}