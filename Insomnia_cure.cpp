#include<iostream>
#include<cmath>
#include<climits>
#include<string>
#include<vector>

using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n;
    cin>>d;
    int arr[d];
    for(int i=0;i<d;i++){
        arr[i]=0;
    }
    int count=0;
    for(int i=k-1;i<d;i+=k){
        if(arr[i]==0){
            count++;
            arr[i]=1;
        }
    }
    for(int i=l-1;i<d;i+=l){
        if(arr[i]==0){
            count++;
            arr[i]=1;
        }
    }
    for(int i=m-1;i<d;i+=m){
        if(arr[i]==0){
            count++;
            arr[i]=1;
        }
    }
    for(int i=n-1;i<d;i+=n){
        if(arr[i]==0){
            count++;
            arr[i]=1;
        }
    }
    cout<<count;
}
