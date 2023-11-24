#include <stdio.h>

void swap(int*,int*);

void main(){
    int a,b;
    printf("Enter first Number  : ");
    scanf("%d",&a);
    printf("Enter Second Number  : ");
    scanf("%d",&b);
    printf("Number  before Swaping");
    printf("a = %d\t b = %d\n",a,b);
    swap(&a,&b);
    printf("Number  after Swaping");
    printf("a = %d\t b = %d",a,b);
    
}

void swap(int *a,int *b){
    int i;
    i=*a;
    *a=*b;
    *b=i;
}
