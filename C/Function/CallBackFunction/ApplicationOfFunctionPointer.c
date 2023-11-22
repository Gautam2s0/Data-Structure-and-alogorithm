// #include <stdio.h>
// void sum(int a,int b){
//     printf("Sum = %d\n",a+b);
// }
// void sub(int a,int b){
//     printf("Sub = %d\n",a-b);
// }
// void mul(int a,int b){
//     printf("Mul = %d\n",a*b);
// }
// void div(int a,int b){
//     printf("Div = %d\n",a/b);
// }

// // declaring a funnction that take another function as parameter
// // here (*fptr) is a pointer function that takes two integer type parameter
// void display(void (*fptr)(int,int)){
//     (*fptr)(9,5);
// }
// void main(){
//     // 1st method
//     display(sum);
//     display(sub);
//     display(mul);
//     display(div);
//     // second method

//     int a,b,ch;
//     void (*fptr[10])(int,int)={sum,sub,mul,div};
//     printf("Enter Ch : ");
//     scanf("%d",&ch);
//     printf("Enter a and b : ");
//     scanf("%d %d",&a,&b);
//     (*fptr[ch])(a,b);



// }

