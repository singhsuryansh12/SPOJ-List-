#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t,i,x,y,num;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        if(x%2==0 && y%2==0){
            if(y==x || (y==(x-2))){
                num = x+y;
                cout<<num<<endl;
            }
            else{
                cout<<"No Number"<<endl;
            }
        }
        else if(x%2!=0 && y%2!=0){
            if(x==y || x==(y+2)){
                num=x+y-1;
                cout<<num<<endl;
            }
            else{
                cout<<"No Number"<<endl;
            }
        }
        else{
            cout<<"No Number"<<endl;
        }
    }
}