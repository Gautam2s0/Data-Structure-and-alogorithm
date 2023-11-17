#include <stdio.h>

void main (){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    printf("value of a through a = %d \n",a);
    printf("value of a  through single pointer p= %d\n ",*p);
    printf("value of a through double pointer q = %d \n",*(*q));
    printf("value of a through three level pointer r = %d \n",*(*(*r)));
    // *q=*p;
    // we can change the value of a using this pointer
    *p=12;
    printf("value of a through single pointer after changin the value = %d \n",*(*q));
    **q=20;
    printf("value of a through double pointer q after changint the value = %d \n",*(*q));
    ***r=30;
    printf("value of a through three level pointer q after changin the value = %d \n",***r);
}