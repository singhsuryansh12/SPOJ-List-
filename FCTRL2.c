#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    unsigned long long int t,i,num[100],x=1;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&num[i]);
    }
    for(i=0;i<t;i++){
        for(;num[i]>0;){
            char val[]={x};
            x = atoi(val)*num[i];
            num[i]--;
        }
        printf("%s\n",val);
    }
    return 0;
}