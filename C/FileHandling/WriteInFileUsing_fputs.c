#include <stdio.h>

void main(){
    FILE *fp;
    char str[100];
    fp=fopen("f1.txt","a");
    printf("Enter a string : ");
    gets(str);
    fputs(str,fp);
    //  To add new line in file
    fputs("\n",fp);
    fclose(fp);

}