#include <stdio.h>
void display(char[]);
void main(){
    char str[]="Gautam Sonkar";
    display(str);
}
void display(char str[] ){
    printf("string is %s\n",str);
    // upadating the string
    str[3]='T';
    printf("string is %s",str);
}