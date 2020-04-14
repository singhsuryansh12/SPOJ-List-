#include <bits/stdc++.h>

using namespace std;

int main(void){
    long double val,n[1000];
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n[i];
        val = n[i]/(n[i] + 1);
        cout<< fixed << setprecision(8) <<val<<endl;
    }
}