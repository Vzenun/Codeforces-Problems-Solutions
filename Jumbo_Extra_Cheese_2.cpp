#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;
void merge(long long int arr[],long long int brr[],long long int r,long long int l,long long int m){
    long long int n1=m-l+1;
    long long int n2=r-m;
    long long int a[n1];
    long long int b[n2];
    long long int a1[n1];
    long long int b1[n2];
    for(long long int i=0;i<n1;i++){
        a[i]=arr[i+l];
        a1[i]=brr[i+l];    
    }
    for(long long int i=0;i<n2;i++){
        b[i]=arr[i+m+1];
        b1[i]=brr[i+m+1];
    }
    long long int k=l;
    long long int i=0;
    long long int j=0;
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
void mergesor(long long int arr[],long long int brr[],long long int r,long long int l){
    if(l<r){
        long long int m=(l+r)/2;
        mergesor(arr,brr,m,l);
        mergesor(arr,brr,r,m+1);
        merge(arr,brr,r,l,m);
    }
}



int main(){
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++){
        long long int m;
        cin>>m;
        long long int a[m];
        long long int b[m];
        for(long long int j=0;j<m;j++){
            cin>>a[j]>>b[j];
        }
        for(long long int j=0;j<m;j++){
            if(a[j]<b[j]){
                long long int temp=a[j];
                a[j]=b[j];
                b[j]=temp;
            }
        }
        mergesor(a,b,m-1,0);
        long long int sum=0;
        for(long long int j=0;j<m;j++){
            sum+=2*b[j];
        }
        sum+=a[0];
        sum+=a[m-1];
        for(long long int j=0;j<m-1;j++){
            sum+=a[j+1]-a[j];
        }
        cout<<sum<<endl;
    }

    // cout<<endl<<-1%4;
}
