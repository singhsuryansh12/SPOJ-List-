#include <stdio.h>

int main(void){
    int t,i,j,x,k,gd[1000],mgd[1000],zillast[1000][1000],mechast[1000][1000],check,val;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        //printf("\n");
        scanf("%d %d",&gd[i],&mgd[i]);
        for(j=0;j<gd[i];j++){
            scanf("%d",&zillast[i][j]);
        }
        for(j=0;j<mgd[i];j++){
            scanf("%d",&mechast[i][j]);
        }       
    }
    for(i=0;i<t;i++){
        for(j=0,val=0;j<gd[i];j++){
            /*for(k=0;k<(gd[i]-1);k++){
                if(zillast[i][k]<zillast[i][k+1]){
                    x=zillast[i][k];
                    zillast[i][k] = zillast[i][k+1];
                    zillast[i][k+1] = x;
                }
            }*/
            if(zillast[i][j] > val){
                val = zillast[i][j];
            }
        }
        check=val;
        for(j=0;j<mgd[i];j++){
            /*for(k=0;k<(mgd[i]-1);k++){
                if(mechast[i][k]<mechast[i][k+1]){
                    x=mechast[i][k];
                    mechast[i][k] = mechast[i][k+1];
                    mechast[i][k+1] = x;
                }
            }*/
            if(mechast[i][j] > check){
                check = mechast[i][j];
            }
        }   
        /*for(j=(gd[i]-1),k=(mgd[i]-1);k>=0 && j>=0;){
            if(zillast[i][j] < mechast[i][k]){
                zillast[i][j] = -1;
                j--;
                printf("gd one down \n");
            }
            else{
                mechast[i][j]=-1;
                k--;
                printf("mecha one down \n");
            }
            if(k<0){
                printf("Godzilla\n");
            }
            else if (j<0)
            {
                printf("MechaGodzilla\n");
            }*/
        if(check > val){
            printf("MechaGodzilla\n");
        }
        else
        {
            printf("Godzilla\n");
        }
    }
}
