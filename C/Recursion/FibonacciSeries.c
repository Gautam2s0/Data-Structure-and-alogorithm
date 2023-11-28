#include <stdio.h>

void fibonacci(int n){
   static int prev=0,next=1,sum=1;
    if(n<1)return 0;
    printf("%d\t",sum);
    sum=prev+next;
    prev=next;
    next =sum;
    fibonacci(n-1);

}

void main(){
    fibonacci(8);
}


