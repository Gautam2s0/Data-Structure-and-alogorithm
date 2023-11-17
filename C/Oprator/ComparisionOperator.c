#include <stdio.h>

int main() {
    int a=6,b=8,result1,result2,result3,result4,result5,c=1;
    result1=a>b || printf("loader");  
    // O/P: loader1 
    // a>b not true so value is 0(zero)
    // printf("loader") value would be 1
    // 0(zero) or(||) 1  ==> 1
    // now O/P 1 and print function will print loader ,so Final O/P==loader1 
    result2=a>b && printf("loader\n") || printf("linker\n")||printf("both\n");
    // O/P:   linker
    //        1
    result3=a>b && printf("loader\n") || printf("linker\n")&&printf("both\n");   
    // O/P :  linker
    //        both
    //        1
    result4=c--&&++b;
    // O/P:  1
    //  result4=1&&9 (c-- value will decrease after asssign ++b will first increament then assign 9)
    result5=--c&&++b;
    // O/P:  0
    //  result4=1&&9 (--c value will decrease first then will asssign ++b will first increament then assign 9)

    printf("%d",result1);
    printf("%d",result2);
    printf("%d",result3);
    
    return 0;
}