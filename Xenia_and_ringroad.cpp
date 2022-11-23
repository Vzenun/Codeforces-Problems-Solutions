#include<iostream>
#include<cmath>
#include<string>
#include<climits>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int start =1;
    long long int cal=0;
    for(int i=0;i<m;i++){
        if(arr[i]-start>=0){
            cal+=(arr[i]-start)%n;
        }
        else{
            cal+=(n+arr[i]-start)%n;
        }
        start=arr[i];
    }
    cout<<cal;
    // cout<<endl<<-1%4;
}
