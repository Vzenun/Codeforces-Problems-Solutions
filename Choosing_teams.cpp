#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long int n,k;
    cin>>n>>k;
    unsigned long long int arr[n];
    for(unsigned long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    unsigned long long int m=0;
    for(unsigned long long int i=0;i<n;i++){
        if(arr[i]<=5-k){
            m++;
        }
    }
    cout<<m/3;
    return 0;
}