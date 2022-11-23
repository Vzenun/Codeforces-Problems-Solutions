#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
#include<numbers>
#include<numeric>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int max=0;
    int num=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        num-=a[i];
        num+=b[i];
        if(max<num){
            max=num;
        }
    }
    cout<<max;
}