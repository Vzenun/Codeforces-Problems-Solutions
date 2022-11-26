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
        for(long long int j=0;j<n;j++){
            cin>>arr[j];
        }
        long long int sum=arr[0];
        long long int sum_ind=0;
        long long int b;
        long long int b_ind;
        for(long long int j=0;j<n;j++){
            if(arr[j]!=sum){
                b=arr[j];
                b_ind=j;
            }
        }
        long long int counta=0;
        long long int countb=0;
        for(long long int j=0;j<n;j++){
            if(arr[j]==sum){
                counta++;
            }
            else{
                countb++;
            }
        }
        if(counta>countb){
            cout<<b_ind+1<<endl;
        }
        else{
            cout<<sum_ind+1<<endl;
        }
    }
    return 0;
}