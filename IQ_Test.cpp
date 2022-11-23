#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<4){
        if(n==3){
            if((arr[2]-arr[0])%2==0){
                cout<<2;
                return 0;
            }
            else{
                if((arr[2]-arr[1])%2==0){
                    cout<<1;
                    return 0;
                }
                else{
                    cout<<3;
                    return 0;
                }
            }
        }
    }
    else{
        int start=0;
        int end=0;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
                start=i;
            }
            else{
                odd++;
                end=i;
            }
        }
        if(odd==1){
            cout<<end+1;
            return 0;
        }
        else{
            cout<<start+1;
            return 0;
        }
    return 0;
    }
}
