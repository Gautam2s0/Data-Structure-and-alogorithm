// call itself directly

#include <stdalign.h>
int fact(int);
void main(){
    int res,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    res=fact(num);
    printf("factorial = %d",res);
}

int fact(int num){
    static int a=1;
    if(num<1) return a;
    a*=num;
    fact(num-1);
}