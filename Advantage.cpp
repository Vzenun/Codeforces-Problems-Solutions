#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int test;
    cin>>test;
    for(long long int i=0;i<test;i++){
        long long int n;
        cin>>n;
        long long int arr[n];
        long long int max=0;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int left[n];
        long long int right[n];
        for(long long int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
            left[i]=max;
        }
        max=0;
        for(long long int i=0;i<n;i++){
            //cout<<"YYYYY";
            if(max<arr[n-i-1]){
                max=arr[n-i-1];
            }
            right[n-i-1]=max;
        }
        long long int ans[n];
        for(long long int i=0;i<n;i++){
            if(i==0){
                cout<<arr[i]-right[i+1]<<" ";
            }
            else if(i==n-1){
                cout<<arr[i]-left[i-1]<<" ";
            }
            else{
                long long int m=std::max(right[i+1],left[i-1]);
                cout<<arr[i]-m<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}