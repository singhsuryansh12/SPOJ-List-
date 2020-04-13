#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    unsigned long long int t,i,num[100000],c5,val,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>num[i];
        c5=0;
        for(j=1;pow(5,j) <= num[i];){
            c5 = c5 + num[i]/(pow(5,j));
            j++;
        }
        cout<<c5<<endl;
    }
}