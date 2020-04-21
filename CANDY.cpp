#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n,i,sum,num[10000],eq,candy;
    for(;;){
        cin>>n;
        if(n==-1){
            break;
        }
        for(sum=0,i=0;i<n;i++){
            cin>>num[i];
            sum=sum+num[i];
        }
        if(sum%n==0){
            eq=sum/n;
        }
        else{
            cout<<"-1"<<endl;
            continue;
        }
        for(i=0,candy=0;i<n;i++){
            if(num[i]<eq){
                candy=candy + (eq - num[i]);
            }
        }
        cout<<candy<<endl;
    }
}