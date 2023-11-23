// fun1 call fun2 and fun2 call fun1
// a function call by another function in circular fun1 --> fun2 --> fun3 --> fun1
#include <stdalign.h>
int fact(int);
void main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    printf("factorial = %d",fun1(num));
}

int fun1(int num){
    if(num<=1) return 1;
    return num*fun2(num-1);
    
}
int fun2(int num){
    if(num<=1) return 1;
    return num*fun1(num-1);
    
}