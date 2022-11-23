#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            sum++;
        }
        else{
            sum--;
        }
    }
    cout<<sum;
    return 0;
}