// Vidur Goel

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<cstring>
#include<cstdio>
//#include <bits/stdc++.h>

# define ll long long int
# define vec vector<long long int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    if(a>b){
        if(b-n>y){
            cout<<a*(b-n)<<endl;
        }
        else if(b-n<y){
            n=n-y;
            if(a-n>x){
                cout<<(a-n)*y<<endl;
            }
            else if(a-n<x){
                cout<<x*y<<endl;
            }
            else{
                cout<<x*y<<endl;
            }
        }
        else{
            cout<<a*y<<endl;
        }
    }
    else if(a<b){
        if(b-n>y){
            cout<<a*(b-n)<<endl;
        }
        else if(b-n<y){
            n=n-y;
            if(a-n>x){
                cout<<(a-n)*y<<endl;
            }
            else if(a-n<x){
                cout<<x*y<<endl;
            }
            else{
                cout<<x*y<<endl;
            }
        }
        else{
            cout<<a*y<<endl;
        }
    }
    else{
        if(x>y){
            if(a-n<x){
                n=n-(a-x);
                if(b-n<y){
                    cout<<(x)*(y)<<endl;
                }
                else if(b-n>y){
                    cout<<(x)*(b-n)<<endl;
                }
                else{
                    cout<<(x)*(y)<<endl;
                }
            }
            else if(a-n>x){
                cout<<(a-n)*(b)<<endl;
            }
            else{
                cout<<(a-n)*(b)<<endl;
            }
        }
        else if(x<y){
            if(a-n<x){
                n=n-(a-x);
                if(b-n<y){
                    cout<<(x)*(y)<<endl;
                }
                else if(b-n>y){
                    cout<<(x)*(b-n)<<endl;
                }
                else{
                    cout<<(x)*(y)<<endl;
                }
            }
            else if(a-n>x){
                cout<<(a-n)*(b)<<endl;
            }
            else{
                cout<<(a-n)*(b)<<endl;
            }
        }
        else{
            if(a-n<x){
                n=n-(a-x);
                if(b-n<y){
                    cout<<(x)*(y)<<endl;
                }
                else if(b-n>y){
                    cout<<(x)*(b-n)<<endl;
                }
                else{
                    cout<<(x)*(y)<<endl;
                }
            }
            else if(a-n>x){
                cout<<(a-n)*(b)<<endl;
            }
            else{
                cout<<(a-n)*(b)<<endl;
            }
        }
    }
    return 0;
}