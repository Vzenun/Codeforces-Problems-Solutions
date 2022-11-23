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
        cin>>arr[i];
        brr[arr[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}
