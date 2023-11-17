#include <stdio.h>
void  main(){
    int mat[3][4],i,j,rowSum=0,colSum=0;
    printf("Enter the element of matrix which is 3x4 : ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("transpose matrix is : \n");
    for(i=0;i<3;i++){
        rowSum=0;
        colSum=0;
        for(j=0;j<4;j++){
           rowSum+=mat[i][j];
           colSum+=mat[j][i];
        }
        printf("Sum Of %dth Row = %d and %dth column =%d \n",i,rowSum,i,colSum);
    }
}