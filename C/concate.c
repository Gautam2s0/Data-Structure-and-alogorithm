#include<stdio.h>

void main(void)
{
  char str1[25]={'G','a','u','t','a','m'},str2[25]="Sonkar";
  int i=0,j=0;
  
  while(str1[i]!='\0')
  i++;

  while(str2[j]!='\0')
  {
    
    // printf("%c",str2[j]);
    // if(j==0){
    //   str1[i]=" "+str2[j];
    // }
    str1[i]=""+str2[j];

    // printf("%c",str1[i]);
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
}