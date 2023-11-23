// // Write a C program to multiply two matrices using recursion.
// // Write a C program to check whether a given string is a palindrome or not using recursion.
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// #define MAX 10
// int r = 0, row = 0;
// int cMat[MAX][MAX];
// int i = 0;
// j = 0, sum = 0;
// int len = 0;
// // void MulMatrix(int[][],int[][]);

// int main()
// {
//     // count(3);
//     // bool res;
//     // int len;
//     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int b[3][2] = {{1, 2}, {3, 4}, {5, 6}};
//     len = sizeof(a) / sizeof(a[0]);
//     // char str[60];
//     // printf("Enter a string : ");
//     // gets(str);

//     // res=palindrome(str,strlen(str));
//     // res?printf("Yes"):printf("False");
//     // printf("sum = %d",print(50));
//     printf("len= %d \n", len);
//     MulMatrix(a, b);
//     return 0;
// }

// void MulMatrix(int a[MAX][MAX], int b[MAX][MAX])
// {
//     if (row == len)
//         return 0;
//     for (i = 0; i < len; i++)
//     {
//         for (j = 0; j < len; j++)
//         {
//             sum =sum+ a[i][j] * b[j][i];
//         }
//         printf("sum = %d\t", sum);
//         cMat[row][i] = sum;
//     }
//     printf("\n");
//     row++;
//     MulMatrix(a, b);
// }

#include<stdio.h>
#define MAX 10
void multiplyMatrix(int [MAX][MAX],int [MAX][MAX]);
int rone,cone,rtwo,ctwo;
int crm[MAX][MAX];
int sum,i=0,j=0,k=0;
int main()
{
    int arm[MAX][MAX],brm[MAX][MAX],i,j,k;
	
	   printf("\n\n Multiplication of two Matrices :\n");
       printf("----------------------------------\n");
    printf(" Input number of rows for the first matrix : ");
    scanf("%d",&rone);
    printf(" Input number of columns for the first matrix : ");
    scanf("%d",&cone);	
	
    printf(" Input number of rows for the second matrix : ");
    scanf("%d",&rtwo);
    printf(" Input number of columns for the second matrix : ");
    scanf("%d",&ctwo);	
    if(cone!=rtwo)
    {
         printf("\n Check col. of first and row of second matrix.");
         printf("\n They are different. Try again.\n");
    }
    else
    {
      printf("\n Input elements in the first matrix :\n");
      for(i=0;i<rone;i++){
      for(j=0;j<cone;j++){
	  	   printf(" element - [%d],[%d] : ",i,j);
           scanf("%d",&arm[i][j]);}}
      printf(" Input elements in the second matrix :\n");
      for(i=0;i<rtwo;i++){
      for(j=0;j<ctwo;j++){
		   printf(" element - [%d],[%d] : ",i,j);
           scanf("%d",&brm[i][j]);}}
      printf("\n Here is the elements of First matrix : \n");
      for(i=0;i<rone;i++)
      {
      printf("\n");
      for(j=0;j<cone;j++)
      {
           printf(" %d\t",arm[i][j]);
      }
      }
      printf("\n Here is the elements of Second matrix : \n");
      for(i=0;i<rtwo;i++)
      {
      printf("\n");
      for(j=0;j<ctwo;j++)
      {
           printf(" %d\t",brm[i][j]);
      }
      }
      multiplyMatrix(arm,brm);
  }
  printf("\n The multiplication of two matrix is : \n");
  for(i=0;i<rone;i++)
  {
      printf("\n");
      for(j=0;j<ctwo;j++)
      {
           printf(" %d\t",crm[i][j]);
      }
  }
  printf("\n\n");
  return 0;
}
void multiplyMatrix(int arm[MAX][MAX],int brm[MAX][MAX])
{
    if(i<rone)
    { //row of first matrix
    if(j<ctwo)
    {  //column of second matrix
         if(k<cone)
         {
             sum=sum+arm[i][k]*brm[k][j];
             k++;
             multiplyMatrix(arm,brm);
         }
         crm[i][j]=sum;
             sum=0;
             k=0;
             j++;
             multiplyMatrix(arm,brm);
    }
    j=0;
    i++;
    multiplyMatrix(arm,brm);
    }
}
