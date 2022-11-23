#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<numeric>
#include<numbers>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100]={0};
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[k-1]++;
    }
    for(int i=0;i<100;i++){
        if(arr[i]>0){
            for(int j=0;j<arr[i];j++){
                cout<<i+1<<" ";
            }
        }
    }
    return 0;
}
