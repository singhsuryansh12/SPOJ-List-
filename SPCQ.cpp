#include <iostream>

using namespace std;

int main(void){
    unsigned long long int t,i,n[10000],j,val,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n[i];
        for(j=n[i];;j++){
            val=j;            
            for(sum=0;val!=0;){
                sum = sum + val%10;
                val= val/10;
            }
            if(j%sum == 0){
                cout<<j<<endl;
                break;
            }
        }
    }
}