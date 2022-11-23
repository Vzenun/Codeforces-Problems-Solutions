#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum_x=0;
    int sum_y=0;
    int sum_z=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        sum_x+=a;
        sum_y+=b;
        sum_z+=c;
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}