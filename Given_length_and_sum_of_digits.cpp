// Vidur Goel

/*
888b    888  .d88888b. 88888888888        .d8888b.   .d88888b.  888b     d888 8888888b.  888      8888888888 88888888888 8888888888       Y88b   d88P 8888888888 88888888888 
8888b   888 d88P" "Y88b    888           d88P  Y88b d88P" "Y88b 8888b   d8888 888   Y88b 888      888            888     888               Y88b d88P  888            888     
88888b  888 888     888    888           888    888 888     888 88888b.d88888 888    888 888      888            888     888                Y88o88P   888            888     
888Y88b 888 888     888    888           888        888     888 888Y88888P888 888   d88P 888      8888888        888     8888888             Y888P    8888888        888     
888 Y88b888 888     888    888           888        888     888 888 Y888P 888 8888888P"  888      888            888     888                  888     888            888     
888  Y88888 888     888    888           888    888 888     888 888  Y8P  888 888        888      888            888     888                  888     888            888     
888   Y8888 Y88b. .d88P    888           Y88b  d88P Y88b. .d88P 888   "   888 888        888      888            888     888                  888     888            888     
888    Y888  "Y88888P"     888            "Y8888P"   "Y88888P"  888       888 888        88888888 8888888888     888     8888888888           888     8888888888     888     
                                                                                                                                                                             
                                                                                                                                                                             
                                                                                                                                                                             
*/

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
    ll n,s;
    cin>>n>>s;
    ll arr[n];
    ll k=s;
    if(n*9<s){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        for(ll i=0;i<n;i++){
            if(k>0){
                arr[i]=1;
            }
            else{
                
            }
        }
        s=s-n;
        ll i=0;
        while(i<n){
            if(s>=8){
                arr[i]=9;
                s=s-8;
                i++;
            }
            else{
                arr[i]=arr[i]+s;
                s=0;
                i++;
            }
        }
        
        for(ll i=0;i<n;i++){
            cout<<arr[n-i-1];
        }
        cout<<" ";
        for(ll i=0;i<n;i++){
            cout<<arr[i];
        }
    }

    return 0;
}