#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a[4]={0,0,0,0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a[arr[i]-1]+=1;
    }
    //cout<<a[0];
    //cout<<a[2];
    int count=0;
    count+=a[3];
    a[3]=0;
    if(a[0]==a[2]){
        count+=a[0];
        a[0]=0;
        a[2]=0;
        if(a[1]%2==0){
            count+=a[1]/2;
        }
        else{
            count+=(a[1]/2)+1;
        }
    }
    else if(a[0]>a[2]){
        count+=a[2];
        a[0]=a[0]-a[2];
        a[2]=0;
        //cout<<"%"<<a[0];
        if(a[0]/2>=a[1]){
            count+=a[1];
            //cout<<a[1]<<" ";
            count+=(a[0]-(2*a[1]))/4;
            if((a[0]-(2*a[1]))%4!=0){
                //cout<<"*";
                count+=1;
            }
        }
        else{
            count+=a[0]/2;
            a[1]-=a[0]/2;
            a[0]-=2*(a[0]/2);
            if(a[1]%2==0){
                if(a[0]==1){
                    count+=a[1]/2+1;
                }
                else{
                    count+=a[1]/2;
                }
            }
            else{
                count+=a[1]/2+1;
            }
        }
    }
    else if(a[0]<a[2]){
        count+=a[2];
        a[2]=0;
        a[0]=0;
        if(a[1]%2==0){
            count+=a[1]/2;
        }
        else{
            count+=(a[1]/2)+1;
        }
    }
    cout<<count;
}
