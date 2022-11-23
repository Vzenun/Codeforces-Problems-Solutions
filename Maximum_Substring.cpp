#include<iostream>
#include<cmath>
#include<climits>
#include<string>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int tk;
        cin>>tk;
        string s;
        cin>>s;
        int x=0;
        int y=0;
        int x1=0;
        int y1=0;
        int maxx1=0;
        int maxy1=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='1'){
                y++;
                y1++;
                if(maxx1<x1){
                    maxx1=x1;
                }
                x1=0;
            }
            else if(s[j]=='0'){
                x++;
                x1++;
                if(maxy1<y1){
                    maxy1=y1;
                }
                y1=0;
            }
        }
        if(maxx1<x1){
            maxx1=x1;
        }
        x1=maxx1;
        if(maxy1<y1){
            maxy1=y1;
        }
        y1=maxy1;
        //cout<<x<<" "<<y<<" "<<x1<<" "<<y1<<endl;
        if(x==y){
            cout<<x*x<<endl;
        }
        else {
            if(x1*x1>x*y && x1*x1>y1*y1){
                cout<<x1*x1<<endl;
            }
            else if(y1*y1>x*y && x1*x1<y1*y1){
                cout<<y1*y1<<endl;
            }
            else{
                cout<<x*y<<endl;
            }
        }
    }
    return 0;
}
