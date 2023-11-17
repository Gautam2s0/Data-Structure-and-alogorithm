#include <stdio.h>
#include <string.h>
void  main(){
    int mat1[2][3],mat2[3][2],mat3[2][2],mult=1,i,j,k=0;
    printf("Enter the element of first matrix which is 2x3 : ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the element of second matrix which is 3x2 : ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<2;i++){
        
        for(j=0;j<2;j++){
            mult=0;
          for ( k = 0; k < 3; k++)
          {
            mult+=mat1[i][k]*mat2[k][j];
          }
          mat3[i][j]=mult;
          printf(" %d\t",mult);
        }
        printf("\n"); 
    }

   
}