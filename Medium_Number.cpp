#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long int n;
    cin>>n;
    for(unsigned long long int i=0;i<n;i++){
        unsigned long long int a,b,c,mid;
        cin>>a>>b>>c;
        mid=0;
        if(a==b){
            if(b==c){
                cout<<b<<endl;
            }
            if(b>c){
                cout<<b<<endl;
            }
            if(b<c){
                cout<<b<<endl;
            }
        }
        if(a>b){
            if(b==c){
                cout<<b<<endl;
            }
            if(b>c){
                cout<<b<<endl;
            }
            if(b<c){
                if(a>c){
                    cout<<c<<endl;
                }
                if(a==c){
                    cout<<a<<endl;
                }
                if(a<c){
                    cout<<a<<endl;
                }
            }
        }
        if(a<b){
            if(b==c){
                cout<<b<<endl;
            }
            if(b>c){
                if(a>c){
                    cout<<a<<endl;
                }
                if(a==c){
                    cout<<a<<endl;
                }
                if(a<c){
                    cout<<c<<endl;
                }
            }
            if(b<c){
                cout<<b<<endl;
            }
        }
    }
    return 0;
}