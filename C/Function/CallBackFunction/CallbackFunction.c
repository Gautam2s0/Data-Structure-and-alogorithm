#include <stdio.h>
void sum(int a,int b){
    printf("Sum = %d\n",a+b);
}
void sub(int a,int b){
    printf("Sub = %d\n",a-b);
}
// declaring a funnction that take another function as parameter
// here (*fptr) is a pointer function that takes two integer type parameter
void display(void (*fptr)(int,int)){
    (*fptr)(9,5);
}
void main(){
    display(sum);
    display(sub);

}