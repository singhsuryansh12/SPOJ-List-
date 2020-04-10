#include <stdio.h>

int main(void){
    long long int t, i, ni[10000],j,k,val=0;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&ni[i]);
    }
    for(i=0;i<t;i++){
        long long int board[ni[i]][ni[i]];
        val=0;
        for(j=0;j<ni[i];j++){
            for(k=0;k<ni[i];k++){
//                if(board[j][k] == -1){
//                    continue;
//                }
                if(board[j][k] != -1){
                    val++;
                    board[j][k] = -1;
                    board[j+1][k+2] = -1;
                    board[j-1][k+2] = -1;
                    board[j+1][k-2] = -1;
                    board[j-1][k-2] = -1;
                    board[j+2][k-1] = -1;
                    board[j+2][k+1] = -1;
                    board[j-2][k-1] = -1;
                    board[j-2][k+1] = -1;
              //    printf("%d ",board[j][k]);
                }
            }
        }
        if(val%2 == 0){
            printf("%d\n",1);
        }
        else{
            printf("%d\n", 0);
        }
    }

//(a+1,b+2),(a-1,b+2),(a+1,b-2),(a-1,b-2),(a+2,b-1),(a+2,b+1),(a-2,b-1),(a-2,b+1)