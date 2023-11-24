#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100
void main(){
    char s1[MAX],s2[MAX],result[MAX+MAX];
    int num1,num2,num3;
    printf("Enter first number : ");
    gets(s1);
    printf("Enter second number : ");
    gets(s2);
    num1=atoi(s1);
    num2=atoi(s2);
    num3=num1+num2;
    sprintf(result, "%d", num3);
    printf("s1=%s",result);

   

}