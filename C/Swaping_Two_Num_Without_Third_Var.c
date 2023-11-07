// swaping two numbers without using third variable

#include <stdio.h>

int main()
{
   int a=10;
   int b=20;
   a=a+b;
   b=a-b;
   a=a-b;
   printf("%d\n",a);
   printf("%d",b);

    return 0;
}