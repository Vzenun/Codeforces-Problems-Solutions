#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int max=0;
    int min=100;
    for(int i=0;i<3;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    cout<<max-min<<endl;
    return 0;
}