#include <stdio.h>

int  fibonacci(int n){
    static int prev=0,next=1, sum=1;
    if(n<1) return 0;
    printf("%d\t",sum);
    sum=prev+next;
    prev=next;
    next=sum;
    fibonacci(n-1);
    return sum;
}


void main(){
    int i,j;
    printf("Enter a number : ");
    scanf("%d",&i);
    j=fibonacci(i);
    printf("\nsum = %d\n",j);
}