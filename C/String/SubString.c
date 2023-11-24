#include <stdio.h>
#include<string.h>
#include <stdbool.h>

void main(){
    int i,j,len,k=0;
    char str[100],Substr[100];
    bool flag=false,f=false;
    printf("Enter the string  :");
    gets(str);
    printf("Enter the substring : ");
    gets(Substr);
    len=strlen(str);
    
 // ******************************************************************************** 

  flag=strstr(str,Substr);
  if(flag){
    printf("Yes");
  }
  else{
    printf("No");
  }


//*************************************************************************************

for(i=0;i<len;i++){
        char sub[len];
        k=0;
        for(j=i;j<len;j++){
            sub[k++]=str[j];
            if(strcmp(sub,Substr)){
               f=true;
                break;
            }
        }
       
    }

   
  if(f){
    printf("5Yes\n");
  }
  else{
    printf("5No\n");
  }
}