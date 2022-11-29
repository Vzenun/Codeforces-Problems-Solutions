#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;
    vector<long long int> arr;
    for(int i=0;i<n;i++){
        long long int k;
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    long long int sum=0;
    long long int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0 && count<m){
            sum+=arr[i];
            count++;
        }
    }
    cout<<-sum<<endl;
    return 0;
}