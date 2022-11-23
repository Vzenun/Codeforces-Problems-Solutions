#include<cmath>
#include<iostream>
#include<climits>
using namespace std;

//Find the minimum element in the unsorted array and replace it with the beginning
void selection_sort(int arr[],int n){
    int min;
    int k;
    for(int i=0;i<n;i++){
        min=arr[i];
        k=i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                k=j;
            }
        }
        arr[k]=arr[i];
        arr[i]=min;
        //cout<<arr[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        selection_sort(arr,n);
        int min=INT_MAX;
        for(int i=1;i<n-1;i++){
            if(arr[i]-arr[i-1]+arr[i+1]-arr[i]<min){
                min=arr[i]-arr[i-1]+arr[i+1]-arr[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}