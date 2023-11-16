#include <stdio.h>
#include <string.h>


void main(){
    char str[10]="GAUTAM";
    int i,l;
    l=strlen(str);
    // *****************************************  Method 1 ***********************************
    // Using Ascii value
    for(i=0;i<l;i++){
      if(str[i]>='A'&& str[i]<='Z'){
        str[i]=str[i]+32;
      }
    }
    printf("%s",str);
}