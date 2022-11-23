#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    int start=0;
    int end=0;
    int max=0;
    int min=101;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
            start=i;
        }
        if(min>=arr[i]){
            min=arr[i];
            end=i;
        }
    }
    int count =0;
    if(start<end){
        count+=start;
        count+=n-1-end;
        cout<<count;
    }
    else{
        count+=start-end;
        count+=end;
        count+=n-1-end-1;
        cout<<count;
    }
}
