#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
using namespace std;



int main(){
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++){
        long long int t;
        cin>>t;
        long long int arr[t];
        for(long long int j=0;j<t;j++){
            cin>>arr[j];
        }
        long long int sum=0;
        for(long long int j=0;j<t;j++){
            sum+=arr[j];
        }
        if(sum==0){
            cout<<0<<endl;
        }
        else if(sum>0){
            cout<<sum<<endl;
        }
        else{
            sum=0-sum;
            cout<<sum<<endl;
        }
    }
    return 0;
}
