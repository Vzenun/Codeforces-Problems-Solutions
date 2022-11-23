#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int num=0;
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1]-arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>=0){
            num++;
        }
        else{
            if(max<num){
                max=num;
            }
            num=0;
        }
    }
    if(max<num){
        max=num;
    }
    cout<<max+1;

}
