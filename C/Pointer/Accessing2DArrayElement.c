// How to access two dimensional array using pointers?

// matrix               =>    Points to base address of two-dimensional array.
//                            Since array decays to pointer.

// *(matrix)            =>    Points to first row of two-dimensional array.
// *(matrix + 0)        =>    Points to first row of two-dimensional array.
// *(matrix + 1)        =>    Points to second row of two-dimensional array.

// **matrix             =>    Points to matrix[0][0]
// *(*(matrix + 0))     =>    Points to matrix[0][0]
// *(*(matrix + 0) + 0) =>    Points to matrix[0][0]
// *(*matrix + 1)       =>    Points to matrix[0][1]
// *(*(matrix + 0) + 1) =>    Points to matrix[0][1]
// *(*(matrix + 2) + 2) =>    Points to matrix[2][2]

#include <stdio.h>
#define row 3 
#define col 4

void main(){
    int mat[row][col]={{1,2,3,0},{4,5,6,0},{7,8,9,0}};
    int (*p)[col] = mat,i,j;
    // s=sizeof(mat)/sizeof(mat[0]); row

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            // *(*(p + i) + j) is equivalent to p[i][j]
           printf("%d ", *(*( p+ i) + j));
        }
        printf("s\n");
    }

    printMat(mat,row,col);
}

void printMat(int (*matrix)[col], int rows, int cols){
     int i, j;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // *(*(matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ", *(*(matrix + i) + j));
        }

        printf("\n");
    }
}