#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>

# define ll long long int
# define vec vector<long long int>

using namespace std;

ll binarysearch(vec arr,ll num,ll i,ll j){
    if(i<j){
        ll m=(i+j)/2;
        if(arr[m]==num){
            return m;
        }
        else if(arr[m]>num){
            return binarysearch(arr,num,i,m);
        }
        else{
            return binarysearch(arr,num,m+1,j);
        }
    }
    else{
        if(arr[i]<=num){
            return i;
        }
        else{
            return i-1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll sum=n*(n+1)*5;
    sum=sum/2;
    ll num=240;
    vec arr;
    for(int i=1;i<=n;i++){
        arr.push_back((5*i*(i+1))/2);
    }
    num=num-k;
    if(num<arr[0]){
        cout<<0<<endl;
    }
    else if(num>=arr[n-1]){
        cout<<n<<endl;
    }
    else{
        cout<<binarysearch(arr,num,0,n-1)+1<<endl;
    }
    return 0;
}