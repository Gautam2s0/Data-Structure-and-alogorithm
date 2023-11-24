#include <stdio.h>
#include <string.h>

void main(){
    int i,j=0,len,count=0,word=1;
    char str[100],ch[100];
    printf("Enter the string  :");
    gets(str);
    len=strlen(str);


    for(i=0;i<len;i++){
        if(str[i]>=65 && str[i]<=90 ||str[i]>90&&str[i]<=122){
            count++;
            ch[j++]=str[i];
        }
        else{
            if(i==len-1) break;
            word++;
        }
    }
    

    printf("letter Count = %d\n",count);
    printf("Word Count = %d\n",word);
    printf("Word without space = %s\n",ch);
    

}