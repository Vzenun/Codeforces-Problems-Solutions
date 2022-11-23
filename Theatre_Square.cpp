#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    long double n,m,a;
    cin>>n>>m>>a;
    cout<<(long int)(ceil(m/a)*ceil(n/a));
    // if(n>=a && m>=a){
    //     if(m%a==0 && n%a==0){
    //         cout<<((m*n)/(a*a));
    //     }
    //     else if(m%a==0 && n%a!=0){
    //         int k=ceil(n/a);
    //         cout<<((m*k)/(a));
    //     }
    //     else if(n%a==0 && m%a!=0){
    //         int k=ceil(m/a);
    //         cout<<((n*k)/(a));
    //     }
    //     else{
    //         int k=ceil(m/a);
    //         cout<<m/a;
    //         cout<<k;
    //         int h=ceil(n/a);
    //         cout<<k*h;
    //     }
    // }
    // else if(n<a && m<a){
    //     cout<<"1";
    // }
    // else if(n>=a && m<a){
    //     if(n%a==0){
    //         cout<<n/a;
    //     }
    //     else{
    //         cout<<ceil(n/a);
    //     }
    // }
    // else if(m>=a && n<a){
    //     if(m%a==0){
    //         cout<<m/a;
    //     }
    //     else{
    //         cout<<ceil(m/a);
    //     }
    // }
    return 0;
}