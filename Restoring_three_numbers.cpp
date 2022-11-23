#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int n=4;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>sum){
            sum=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(sum>arr[i]){
            cout<<sum-arr[i]<<" ";
        }
    }
    return 0;
}