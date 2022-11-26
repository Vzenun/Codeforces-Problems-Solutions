#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>


using namespace std;

long long int chek_num(long long int n){
    int k=0;
    //cout<<n<<endl;
    while(n%2==0){
        n=n/2;
        k++;
    }
    //cout<<k<<endl;
    //cout<<n<<endl;
    if(n==1){
        return k-1;
    }
    else{
        return -1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int test;
    cin>>test;
    for(long long int i=0;i<test;i++){
        long long int n;
        cin>>n;
        long long int m=n;
        while(n%2==0){
            n=n/2;
        }
        //cout<<n;
        for(int j=n;j>=1;j--){
            if(n%j==0){
                //cout<<j<<endl;
                if(chek_num(j+1)!=-1){
                    //cout<<j;
                    cout<<m/j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}