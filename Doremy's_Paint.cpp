#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cout<<1<<" "<<n<<endl;
    }
    return 0;
}