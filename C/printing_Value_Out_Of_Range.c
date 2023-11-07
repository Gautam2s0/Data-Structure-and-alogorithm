#include <stdio.h>

int main()
{
   int a=32768;
  int b=65536;
  printf("%hd\n",a);
  // the value of signed int is not in range of -32768 to 32767 so it will print start value that is -32768
  printf("%hu",b);
  // the value of unsigned int is not in range of 0 to 65535 so it will print start value that is 0

    return 0;
}