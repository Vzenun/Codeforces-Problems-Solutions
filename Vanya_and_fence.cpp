#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            num+=2;
        }
        else{
            num++;
        }
    }
    cout<<num;
}