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
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int n;
        cin>>n;
        if(n==1 || n==2){
            cout<<0<<endl;
        }
        else{
            if(n%2==1){
                cout<<(n-3)/2+1<<endl;
            }
            else{
                cout<<(n-4)/2+1<<endl;
            }
        }
    }
    return 0;
}