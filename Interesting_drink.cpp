#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

# define ll long long int
# define vec vector<long long int>

ll binarysearch(vec arr,ll num,ll i,ll j){
    if(i<j){
        ll m=(i+j)/2;
        if(arr[m]==num){
            return m;
        }
        else if(arr[m]<num){
            return binarysearch(arr,num,m+1,j);
        }
        else{
            return binarysearch(arr,num,i,m);
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
    ll n;
    cin>>n;
    vec arr;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    vec arr2;
    vec arr3;
    arr2.push_back(arr[0]);
    ll h=arr[0];
    ll count=1;
    for(ll i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr2.push_back(arr[i+1]);
        }
        if(h==arr[i+1]){
            count++;
        }
        else{
            arr3.push_back(count);
            count=1;
            h=arr[i+1];
        }
    }
    arr3.push_back(count);
    ll sum=0;
    for(int i=0;i<arr3.size();i++){
        sum+=arr3[i];
        arr3[i]=sum;
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll num;
        cin>>num;
        if(num<arr[0]){
            cout<<0<<endl;
        }
        else if(num>=arr[n-1]){
            cout<<n<<endl;
        }
        else{
            cout<<arr3[binarysearch(arr2,num,0,arr2.size()-1)]<<endl;
        }
    }
    return 0;
}