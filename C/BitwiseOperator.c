// #include <stdio.h>

// int main() {
//     int a=10,b=6;
//     printf("%d\n",a&b);
//     printf("%d\n", a|b);
//     printf("%d\n",a^b);
//     printf("%d",a&b && b+1 ||0);

//     return 0;
// }

#include<stdio.h>

void main(void)
{
  char str1[]="Gautam",str2[]="Sonkar";
  int i=0,j=0;
  
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    
    printf("%c",str2[j]);
    str1[i]=str2[j];
    printf("%c",str1[i]);
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
}


// O/P: 
// 2
// 14
// 12
// 1