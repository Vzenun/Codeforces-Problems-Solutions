#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>


using namespace std;

void merge(int arr[],int low,int mid,int high){
    int num1=mid-low+1;
    int num2=high-mid;

    //Now we will sort these two already sorted arrays and
    //in order to do that first we need to store them in some temp arrays 
    //and then store them according in sorted manner in original array
    int a[num1];
    int b[num2];// these are temp arrays

    for(int i=0;i<num1;i++){
        a[i]=arr[low+i];
    }
    for(int j=0;j<num2;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<num1 && j<num2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }

    //Now suppose one of i or j reached their limit 
    //i.e, either a or either b has reached their end.
    //Now as we know a and b are individually sorted arrays and if a/b is finished then that means
    //b/a all elements are already in the sorted order and are greater than = a/b ones elements.
    //Now we need to put the b/a all elements in original array
    while(i<num1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<num2){
        arr[k]=b[j];
        j++;
        k++;
    }
}

void mergesor(int arr[],int low,int high){
    //if low==high then mid+1 would be out of bounds i.e greater than high
    // low can not be greater than high
    if(low<high){
        int mid=(low+high)/2;
        //we have devided the array into two equal parts to sort them 
        mergesor(arr,low,mid);
        mergesor(arr,mid+1,high);
        //now when they come back after getting merged we need to merge them
        merge(arr,low,mid,high);
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesor(arr,0,n-1);
    int min=arr[n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]-arr[i]<min && j-i==m-1){
                min=arr[j]-arr[i];
            }
        }
    }
    cout<<min;
    return 0;
}