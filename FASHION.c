#include <stdio.h>

int main(void){
    int t, val,n[1000],male[1000][1000],female[1000][1000],i,j,k,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++){
            scanf("%d",&male[i][j]);
        }
        for(j=0;j<n[i];j++){
            scanf("%d",&female[i][j]);
        }
    }
    for(i=0;i<t;i++){
        val=0;
        for(k=0;k<n[i];k++){
            for(j=0;j<(n[i]-1);j++){
                if(male[i][j] < male[i][j+1]){
                    x=male[i][j];
                    male[i][j] = male[i][j+1];
                    male[i][j+1] = x;
                }
            }
            for(j=0;j<(n[i]-1);j++){
                if(female[i][j] < female[i][j+1]){
                    x=female[i][j];
                    female[i][j] = female[i][j+1];
                    female[i][j+1] = x;
                }
            }
        }
        for ( j = 0; j < n[i]; j++)
        {
            val = val + male[i][j]*female[i][j];
        }
        printf("%d\n",val);
    }
}