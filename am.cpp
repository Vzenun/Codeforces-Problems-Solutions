// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

void merge(ll * arr,ll low,ll mid,ll high,ll * brr){
    ll num1=mid-low+1;
    ll num2=high-mid;

    //Now we will sort these two already sorted arrays and
    //in order to do that first we need to store them in some temp arrays 
    //and then store them according in sorted manner in original array
    ll a[num1];
    ll a1[num1];
    ll b[num2];// these are temp arrays
    ll b1[num2];

    for(ll i=0;i<num1;i++){
        a[i]=arr[low+i];
        a1[i]=brr[low+i];
    }
    for(int j=0;j<num2;j++){
        b[j]=arr[mid+1+j];
        b1[j]=brr[mid+1+j];
    }
    ll i=0;
    ll j=0;
    ll k=low;
    while(i<num1 && j<num2){
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

    //Now suppose one of i or j reached their limit 
    //i.e, either a or either b has reached their end.
    //Now as we know a and b are individually sorted arrays and if a/b is finished then that means
    //b/a all elements are already in the sorted order and are greater than = a/b ones elements.
    //Now we need to put the b/a all elements in original array
    while(i<num1){
        arr[k]=a[i];
        brr[k]=a1[i];
        i++;
        k++;
    }
    while(j<num2){
        arr[k]=b[j];
        brr[k]=b1[j];
        j++;
        k++;
    }
}

void mergesort(ll * arr,ll low,ll high,ll * brr){
    //if low==high then mid+1 would be out of bounds i.e greater than high
    // low can not be greater than high
    if(low<high){
        ll mid=(low+high)/2;
        //we have devided the array into two equal parts to sort them 
        mergesort(arr,low,mid,brr);
        mergesort(arr,mid+1,high,brr);
        //now when they come back after getting merged we need to merge them
        merge(arr,low,mid,high,brr);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test; //number of test caases
    cin>>test;
    for(ll i=1;i<=test;i++){
        ll a[3];
        ll b[3];
        for(ll j=0;j<3;j++){
            cin>>a[j]>>b[j];
        }
        mergesort(a,0,2,b);
        ll flag=0;
        ll flag2=0;
        for(ll j=0;j<2;j++){
            if(a[j]==a[j+1]){
                flag=1;
                break;
            }
        }
        mergesort(b,0,2,a);
        for(ll j=0;j<2;j++){
            if(b[j]==b[j+1]){
                flag2=1;
                break;
            }
        }
        if(flag==1 && flag2==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;        
        }
    }
    return 0;
}