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
    if(n<5){
        cout<<n;
        return 0;
    }
    else if(n<10){
        cout<<1+n%5;
        return 0;
    }
    else if(n<20){
        cout<<1+(n%10)/5+n%5;
        return 0;
    }
    else if(n<100){
        cout<<(n/20)+(n%20)/10+(n%10)/5+n%5;
        return 0;
    }
    else{
        cout<<n/100+(n%100)/20+(n%20)/10+(n%10)/5+n%5;
        return 0;
    }

}