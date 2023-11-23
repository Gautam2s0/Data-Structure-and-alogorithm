// Write a C program to check whether a given string is a palindrome or not using recursion.
#include <stdio.h>

void palindrome (int n){
    static int d=1;
    printf("%d\n",n);
    printf("%d\n",d);
    d++;
    if(n>1) count(n-1);
    printf("%d\n",d);
}



void main(){
    // count(3);
    printf("sum = %d",print(50));
}