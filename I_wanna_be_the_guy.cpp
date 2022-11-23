#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(0);
    }
    int p;
    cin>>p;
    int prr[p];
    for(int i=0;i<p;i++){
        cin>>prr[i];
    }
    int q;
    cin>>q;
    int qrr[q];
    for(int i=0;i<q;i++){
        cin>>qrr[i];
    }
    int num=0;
    for(int i=0;i<p;i++){
        if(arr[prr[i]-1]==0){
            num++;
            arr[prr[i]-1]=1;
        }
    }
    for(int i=0;i<q;i++){
        if(arr[qrr[i]-1]==0){
            num++;
            arr[qrr[i]-1]=1;
        }
    }
    if(num==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}
