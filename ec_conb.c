#include <stdio.h>
#include <math.h>
long long int bin(long long int );
int main(void){
    long long int n, num[20000], i, x;
    scanf("%lld",&n);
    for (i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    for(i=0;i<n;i++){
        if(num[i]%2==0){
            x= bin(num[i]);
            printf("%lld\n",x);
        }
        else{
            printf("%lld\n",num[i]);
        }
    }
    return 0;
}
long long int bin(long long int num){
    long long int new[20000],i=0,val=0,j=0;
    for(;num!=0;i++){
        new[i]=num%2;
        num=num/2;
    }
    
    long long int n=i;
    for(i=(n-1),j=0;i>=0;i--,j++){
        val = val + (new[j])*(pow(2,i));
    }
    return val;
}