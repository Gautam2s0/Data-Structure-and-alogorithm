#include <stdio.h>

void main(){
    char str[50] ,length=0,i=0,j;
    printf("Enter a string which has maximum length 50 : ");
    scanf("%s",&str);
    while(str[i]!='\0'){
        length++;
        i++;
    }
    for(j=length-1;j>=0;j--){
        printf("%c",str[j]);
    }
    
}