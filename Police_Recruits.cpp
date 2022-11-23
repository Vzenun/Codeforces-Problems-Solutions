#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int police=0;
    int crime=0;
    for(int i=0;i<n;i++){
        if(police==0){
            if(arr[i]>0){
                police+=arr[i];
            }
            else{
                crime++;
            }
        }
        else{
            if(arr[i]>0){
                police+=arr[i];
            }
            else{
                police--;
            }
        }
    }
    cout<<crime<<endl;
    return 0;
}