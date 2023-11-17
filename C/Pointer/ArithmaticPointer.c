#include<stdio.h>
void  main(){
    int a[]={9,5,6,0,4,44,33,70,96};
    int *p=&a;
    int *q=&a[7];
    int x;
    // ******************************    Addition **************************************************888888
    //x=p+q; //error we can't add two pointer we can add integer in pointer
    x=*(p+3);
    printf("%d\n",*(p+2));              
    printf("%d\n",x);
    // printf("%d",*(p+q));  
    // error invalid operands to binary + (have 'int *' and 'int *')
    // printf("%d",p+q);


   // *************************************** Substraction  **********************************
 
//    printf( "substraction %d\n",*(q-2)); // gives address 
//    printf( "substraction %d\n",(q-p)); //give the interger value (number of element)

   // incerement and decrement operator
    p++;
    printf("Increment %d \n",*p);
    printf("Increment %d \n",*p++);
    printf("Increment %d \n",*++p);
    printf("Decrement %d %d %d \n",*--q,*--q,*--q); // evaluate right to left
    printf("p = %d\n",*p);
    printf("%d\n",*q-3);
    printf("%d\n",*--q+5);
    printf("%d\n",*p+*q);

    
}