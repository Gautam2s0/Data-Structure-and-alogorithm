#include <stdio.h>

void main(){
    int a=10,b=20;
    int *p;
    int *q;
    p=&a;
    q=&b;
    printf("%d\n",*p);
    printf("%d",q);
}