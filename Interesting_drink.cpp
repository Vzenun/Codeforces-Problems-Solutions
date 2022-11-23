#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
using namespace std;

void merg(vector<int> &arr,int r,int l,int m){
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[i+m+1];
    }
    int k=l;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
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
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
}
void mergesor(vector<int> &arr,int r,int l){
    if(l<r){
        int m=(l+r)/2;
        mergesor(arr,m,l);
        mergesor(arr,r,m+1);
        merg(arr,r,l,m);
    }
}

int binary_sear(vector<int> arr,int key,int r,int l,int n){
    if(r>l){
        int m=(r+l)/2;
        if(arr[m]<key){
            return binary_sear(arr,key,r,m+1,n);
        }
        else if(arr[m]>key){
            return binary_sear(arr,key,m,l,n);
        }
        else{
            return m;
        }
    }
    else{
        if(arr[l]<=key){
            return l;
        }
        else{
            return l-1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int k;
    cin>>k;
    vector<int> b;
    for(int i=0;i<k;i++){
        int a;
        cin>>a;
        b.push_back(a);
    }
    mergesor(arr,n-1,0);
    int num=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            num++;
        }
    }
    //cout<<num;
    vector<int> v;
    vector<int> vs;
    v.push_back(arr[n-1]);
    vs.push_back(n-1);
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[i+1]){
            v.push_back(arr[i]);
            vs.push_back(i);
        }
    }
    vector<int> v1;
    vector<int> vs1;
    for(int i=v.size()-1;i>=0;i--){
            v1.push_back(v[i]);
            vs1.push_back(vs[i]);
        }
    for(int i=0;i<k;i++){
        if(binary_sear(v1,b[i],v1.size()-1,0,v1.size())==-1){
            cout<<0<<endl;
        }
        else{
            cout<<vs1[binary_sear(v1,b[i],v1.size()-1,0,v1.size())]+1<<endl;
        }
    }
}
