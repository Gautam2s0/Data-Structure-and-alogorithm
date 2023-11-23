// Write a C program to multiply two matrices using recursion.
// Write a C program to check whether a given string is a palindrome or not using recursion.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char str[],int len)
{
   static int i=0;
    if(str[i]!=str[len-1]&&i<=len-1){
        return false;
    }
    if(len-1==i||i>=len/2){
        return true;
    }
    
    i++;
    len--;
    palindrome(str,len);
}


void main(){
    // count(3);
    bool res;
    int len;
    char str[60];
    printf("Enter a string : ");
    gets(str);

    res=palindrome(str,strlen(str));
    res?printf("Yes"):printf("False");
    // printf("sum = %d",print(50));
    
}