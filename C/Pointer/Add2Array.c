#include <stdio.h>
#define MAX 3

void main(){
    int mat1[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}},mat2[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
    int res[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int (*m)[MAX]=mat1,(*n)[MAX]=mat2,(*r)[MAX];
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
            
        }
    }
    
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            
            printf("%d\t",*(*(res + i) + j));
        }
        printf("\n");
    }
}