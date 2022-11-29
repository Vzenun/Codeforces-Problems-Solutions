#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int test;
    cin>>test;
    for(long long int i=0;i<test;i++){
        vector<long long int> arr;
        vector<long long int> arr2;
        long long int max=0;
        for(int j=0;j<3;j++){
            long long int k;
            cin>>k;
            arr.push_back(k);
            arr2.push_back(k);
            if(max<arr[j]){
                max=arr[j];
            }
        }
        sort(arr.begin(),arr.end());
        
        if(max>arr[1]){
            for(int j=0;j<3;j++){
                if(max==arr2[j]){
                    cout<<0<<" ";
                }
                else{
                    cout<<max-arr2[j]+1<<" ";
                }
            }
        }
        else if(max==arr[1]){
            for(int j=0;j<3;j++){
                cout<<max-arr2[j]+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}