#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t,n,x,i,j,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(sum=0,j=0;j<n;j++){
            cin>>x;
            sum=((sum%n)+(x%n))%n;
        }
        if(sum%n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}