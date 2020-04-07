#include <stdio.h>
#include <math.h>

int main(void){
    long long int n, i, level[2000], cards[2000],c=1000007;
    long double x;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&level[i]);
    }
    for(i=0;i<n;i++){
        x=level[i];
        cards[i]=fmod((fmod((x/2),c)*fmod((3*x + 1),c)),c);
        printf("%lld\n",cards[i]);
    }
}