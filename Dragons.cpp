#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

void merge(int arr[],int brr[],int r,int l,int m){
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    int a1[n1];
    int b1[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[i+l];
        a1[i]=brr[i+l];    
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[i+m+1];
        b1[i]=brr[i+m+1];
    }
    int k=l;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            brr[k]=a1[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            brr[k]=b1[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        brr[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        brr[k]=b1[j];
        j++;
        k++;
    }
}
void mergesor(int arr[],int brr[],int r,int l){
    if(l<r){
        int m=(l+r)/2;
        mergesor(arr,brr,m,l);
        mergesor(arr,brr,r,m+1);
        merge(arr,brr,r,l,m);
    }
}


int main(){
    int s,n;
    cin>>s>>n;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int health=s;
    mergesor(x,y,n-1,0);
    for(int i=0;i<n;i++){
        if(health>x[i]){
            health+=y[i];
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
