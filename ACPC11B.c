#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long int n, i,j, x1[1000], x2[1000], mount1[100][1000], mount2[100][1000], k, val=1038497;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&x1[i]);
        for(j=0;j<x1[i];j++){
            scanf("%lld",&mount1[i][j]);
        }
        scanf("%lld",&x2[i]);
        for(j=0;j<x2[i];j++){
            scanf("%lld",&mount2[i][j]);
        }
    }
    for(i=0;i<n;i++){
        val=1038497;
        for(j=0;j<x1[i];j++){
            for(k=0;k<x2[i];k++){
                if(abs(mount1[i][j] - mount2[i][k]) <= val){
                    val = abs(mount1[i][j] - mount2[i][k]);
                }
            }
        }
        printf("%lld\n",val);
    }        
}