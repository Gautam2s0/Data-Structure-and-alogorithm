#include <stdio.h>
// *************************** call by value ************************
// void main (){
//     int x=0,y=1;
//     func(x,y);
//     printf("\n");
//     printf("x=%d y=%d",x,y);
// }
// void func(x,y){
//     x=5,y=9;
//     printf("x=%d y=%d",x,y);
// }

//************************ call by reference ******************************

void main (){
    int x=0,y=1;
    func(&x,&y);
    printf("\nAbove is function call value\n");
    printf("x=%d y=%d",x,y);
}
void func(int*x,int*y){
    *x=5,*y=9;
    printf("x=%d y=%d",*x,*y);
}
