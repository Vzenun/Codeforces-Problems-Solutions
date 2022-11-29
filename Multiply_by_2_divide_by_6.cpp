#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int test;
    cin>>test;
    for(long long int i=0;i<test;i++){
        long long int n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n%3!=0){
            cout<<-1<<endl;
        }
        else{
            long long int count1=0;
            while(n%3==0){
                n=n/3;
                count1++;
            }
            long long int count2=0;
            while(n%2==0){
                n=n/2;
                count2++;
            }
            if(n==1){
                if(count2>count1){
                    cout<<-1<<endl;
                }
                else if(count1==count2){
                    cout<<count1<<endl;
                }
                else{
                    cout<<count1+count1-count2<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}