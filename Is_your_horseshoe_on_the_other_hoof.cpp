#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    long long int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int i=0;
    int j=3;
    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            if(arr[i]<arr[j]){
                long long int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int num=0;
    for(i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            num++;
        }
    }
    cout<<num;
    
}
