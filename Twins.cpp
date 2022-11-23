#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
#include<numbers>
#include<numeric>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    int arr[100]={0};
    for(int i=0;i<n;i++){
        arr[a[i]-1]++;
    }
    a.clear();
    for(int i=0;i<100;i++){
        if(arr[i]>0){
            a.push_back(i+1);
            arr[i]--;
            i--;
        }
    }
    int sum=accumulate(a.begin(),a.end(),0)/2;
    int k=0;
    for(int i=n-1;i>=0;i--){
        if(sum<0){
            break;
        }
        else{
            sum-=a[i];
            k++;
        }
    }
    cout<<k;
    return 0;
}