#include <stdio.h>

void main(){
    int a=10,b=20;
    int *p;
    int *q;
    p=&a;
    q=&b;
    printf("Address of a= %d\n",p);
    printf("Address of b= %d\n",q);
    printf("Value of a= %d\n",*p);
    printf("Value of b= %d\n",*q);
}