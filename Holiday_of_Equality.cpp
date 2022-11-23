#include<iostream>
#include<string>
#include<climits>
#include<cmath>
#include<vector>
#include<stack>
#include<algorithm>

// class Node{
//     public:
//     string s;
//     Node * next;
// };
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=max-arr[i];
    }
    cout<<sum<<endl;
    return 0;

}