#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
//#include <bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    double x=0;
    for(int i=0;i<n;i++){
        x+=((double)arr[i])/100;
    }
    //cout<<x<<endl;
    double ans=x/n*100;
    //cout << fixed << setprecision(12) << ans <<endl;
}
