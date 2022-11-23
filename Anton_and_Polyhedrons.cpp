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
    int sum=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Icosahedron"){
            sum+=20;
        }
        else if(s=="Cube"){
            sum+=6;
        }
        else if(s=="Tetrahedron"){
            sum+=4;
        }
        else if(s=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=8;
        }
    }
    cout<<sum<<endl;
}