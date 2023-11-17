// Write a program in C to calculate the length of a string using a pointer.

#include <stdio.h>
#define MAX 100
void main(){
    char str[MAX];
    char * ch;
    int l=0;
    printf("Enter a string ");
    fgets(str,MAX,stdin);
    ch=&str; // base address of str or address of first character;


// *ch =value or address of every character in string  
    while(*ch!='\0'){
        l++;
        ch++;

    }
    printf("Length Of String is %d ",l);
    

}