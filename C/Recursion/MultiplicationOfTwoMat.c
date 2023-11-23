// Write a C program to multiply two matrices using recursion.
// Write a C program to check whether a given string is a palindrome or not using recursion.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void MulMatrix(int a[][],int b[][])
{
   int row=0,i,len,**p;
   p=a;
   len=sizeof(p[0])/sizeof(p[0][0]);
   for(i=0;i<len;i++){
    printf("%d\t",p[row][i]*p[i][row]);
   }
   row++;
   printf("\n");

   MulMatrix(a,b);
}


void main(){
    // count(3);
    bool res;
    int len;
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2]={{1,2},{3,4},{5,6}};
    char str[60];
    // printf("Enter a string : ");
    // gets(str);

    // res=palindrome(str,strlen(str));
    // res?printf("Yes"):printf("False");
    // printf("sum = %d",print(50));

    MulMatrix(a,b);
    
}