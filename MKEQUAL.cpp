#include <bits/stdc++.h>

using namespace std;

int main(void){
    long int t,n,k,l,sum=0;
    cin>>t;
    for(k=0;k<t;k++){
        sum=0;
        cin>>n;
        long int arr[n];
        for(l=0;l<n;l++){
            cin>>arr[l];
            sum=sum+arr[l];
        }
        if(sum%n == 0){
            cout<<n<<endl;
        }
        else{
            cout<<n-1<<endl;
        }           
    }
}