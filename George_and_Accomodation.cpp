#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]>>brr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(brr[i]-arr[i]>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}
