#include <stdio.h>
void  main(){
    int mat1[3][4],mat2[3][4],mat3[3][4],i,j;
    printf("Enter the element of first matrix which is 3x4 : ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the element of second matrix which is 3x4 : ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("transpose matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
          mat3[i][j]=mat1[i][j]+mat2[i][j];
          printf("Element of matrix 3:  %d  \n ",mat3[i][j]);
          
        }
        
    }
}