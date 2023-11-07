#include <stdio.h>

int main()
{
   int a=32768;
  int b=65536;
  int c=-10;
  printf("%hd\n",a);
  // the value of signed int is not in range of -32768 to 32767 so it will print start value that is -32768
  printf("%hu",b);
  // the value of unsigned int is not in range of 0 to 65535 so it will print start value that is 0
 printf("%hu",a);
  // the value of c unsigned int is not in range of 0 to 65535 but it try to find in reverse direction(like -1,-2,..) it will find 65535 so it will print 65535 

    return 0;
}