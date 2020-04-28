#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long int t,x,a,b,c,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        x = __gcd(a,b);
        if(c%x==0){
            cout<<"Case "<<i<<":"<<" Yes"<<"\n";
        }
        else{
            cout<<"Case "<<i<<":"<<" No"<<"\n";
        }
    }
}