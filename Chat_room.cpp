#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>

using namespace std;

int main(){
    int flag=0;
    int flag2=0;
    int flag3=0;
    int num=0;
    string a;
    cin>>a;
    if(a.size()<5){
        cout<<"NO";
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]=='h'){
                flag=1;
            }
            else if(flag==1 && a[i]=='e'){
                flag2=1;
            }
            else if(flag==1 && flag2==1 && a[i]=='l'){
                num++;
                flag3=1;
            }
            else if(flag==1 && flag2==1 && flag3==1 && num>=2 && a[i]=='o'){
                cout<<"YES";
                return 0;
            }
        }
        cout<<"NO";
        return 0;
    }
}