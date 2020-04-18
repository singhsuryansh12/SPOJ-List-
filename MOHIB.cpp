#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t, x[5000],a[5000],i,n,total,pro,big;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x[i]>>a[i];
        n = a[i] - x[i];
        total = (a[i] + 1)*n;
        pro = (n-1)*n/2;
        big = total - pro;
        cout<<big<<endl;
    }
}