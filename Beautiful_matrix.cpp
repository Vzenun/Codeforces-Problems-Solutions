#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a=5;
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[i][j]==1){
                cout<<abs(3-i-1)+abs(3-j-1)<<endl;
            }
        }
    }
}