/**
 * C program to find reverse of a string using pointers
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
void reverse(char *str[],char *rev[]);

int main()
{
    char str[MAX_SIZE], rev[MAX_SIZE];
    char *s = str;
    char *r = reverse;
    int len = 0;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);
    
    /* Find length of string */
    // while(*(s++)) len++;

    // /* 
    //  * Store each character from end of original string 
    //  * to reverse string
    //  */
    // s--;
    // while(len >= 0)
    // {
    //     *(r++) = *(--s);
    //     len--;
    // }
    // *r = '\0';
    reverse(str,rev);
    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", rev);

    return 0;
}


void reverse(char *str[],char *rev[]){
    char *p=str,*q=rev;
    int r=0;
    while (*(p++)) r++;
    p--;
    while(r>=0)
    {
        *(q++)=*(--p);
        r--;
    }
    *q='\0';
      
    

}