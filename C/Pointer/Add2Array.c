#include <stdio.h>
#define MAX 3

void main(){
    int mat1[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}},mat2[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
    int res[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
    char str1[20]="Gautam",str2[20];
    int i,j;
    int (*m)[MAX]=mat1,(*n)[MAX]=mat2,(*r)[MAX];
    // for (i = 0; i < MAX; i++)
    // {
    //     for (j = 0; j < MAX; j++)
    //     {
    //         // res[i][j] = mat1[i][j] + mat2[i][j]
    //         res[i][j] = *(*(m + i) + j) + *(*(n + i) + j);
            
    //     }
    // }

    matrixMult(mat1,mat2,res);

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            
            printf("%d\t",*(*(res + i) + j));
        }
        printf("\n");
    }
    copyStr(str1,str2);
    printf("str1 = %s\n",str1);
    printf("str2= %s",str2);
}

void matrixAdd(int mat1[][MAX], int mat2[][MAX], int res[][MAX])
{
    int i, j;


    // Iterate over each matrix elements 
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

void matrixMult(int mat1[][MAX], int mat2[][MAX], int res[][MAX])
{
    int i, j,k,sum=0;


    // Iterate over each matrix elements 
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            sum=0;
            for (k = 0; k < MAX; k++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            sum += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
        }
        *(*(res + i) + j)=sum;
        }
    }
}

void copyStr(char str1[],char str2[]){
    char *p=str1,*q=str2;
    while(*(q++)=*(p++));
}

