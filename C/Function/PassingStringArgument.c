#include <stdio.h>
void display(char[]);
void main(){
    char str[]="Gautam Sonkar";
    display(str);
}
void display(char str[] ){
    printf("string is %s",str);
}