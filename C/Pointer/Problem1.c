#include <stdio.h>
void main()
{
    // const int a = 10;
    // int *p = &a;
    char name[] = "Welcome to Jenny's lectures";
    char *c = name;
    // *p=30; // can't be change the constant  value
    printf("%c\n", *c);
    printf("%c\n", *(c++ +1));
    printf("%c\n", *((c-- +5)-1)+3);
    printf("%c\n", *(++c +10)-32);
    printf("%c %c %c \n", *c,*++c,*--c);
}