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

bool isPrime(int n){
    int sum=0;
    int a=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                sum+=1;
            }
            else{
                a+=1;
            }
        }
    }
    if(sum==1 && a==0){
        return true;
    }
    return false;
}

using namespace std;

int main(){
    cout<<sqrt(25.25);
    return 0;
}