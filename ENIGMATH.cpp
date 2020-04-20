#include <bits/stdc++.h>

using namespace std;
long long int gc(long long int a, long long int b){
    if (a==0)
        return b;
    return (gc(b%a,a));
}
int main(void){
    unsigned long long int t,i,a,b,div;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        div = gc(a, b);
        b=b/div;
        a=a/div;
        cout<<b<<" "<<a<<endl;
    }
}
