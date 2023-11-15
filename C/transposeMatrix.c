#include <stdio.h>
void  main(){
    int mat[3][4],i,j;
    printf("Enter the element of matrix which is 3x4 : ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("transpose matrix is : \n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
}