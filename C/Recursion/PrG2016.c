#include <stdio.h>

void count(int n){
    static int d=1;
    printf("%d\n",n);
    printf("%d\n",d);
    d++;
    if(n>1) count(n-1);
    printf("%d\n",d);
}

int print(int n){
    int i=51,sum=0;
    if(n<1) return;
    printf("%d\n",i-n);
    // i--;
    sum=n+print(n-1);
}

void main(){
    // count(3);
    printf("sum = %d",print(50));
}